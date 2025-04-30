#include "get_next_line.h"

char	*read_line(char *buffer)
{
	int		i;
	char	*res;

	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] != '\n' && buffer[i] != 0)
		i++;
	res = ft_substr(buffer, 0, i);
	if (!res)
		return (NULL);
	return (res);
}

char	*read_buffer(int fd, char *buffer)
{
	char	*str;
	int		bytes;

	str = malloc((BUFFER_SIZE + 1)* sizeof(char));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	bytes = 1;
	while (!ft_strchr(buffer, '\n') && bytes != 0)
	{
		bytes = read(fd, str, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(str);
			return (NULL);
		}
		str[bytes] = 0;
		buffer = ft_strjoin(buffer, str);
	}
	free(str);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer[FD_MAX];

	if (fd < 0 || fd > FD_MAX ||BUFFER_SIZE <= 0)
		return (NULL);
	if (buffer[fd] == NULL)
		buffer[fd] = ft_strdup("");
	buffer[fd] = read_buffer(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = read_line(buffer[fd]);
	return (line);
}