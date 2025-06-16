#include "get_next_line.h"

char	*new_line(char *buffer)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	res = malloc(sizeof(char) * (ft_strlen(buffer) - i + 1));
	if (!res)
	{
		free(res);
		return (NULL);
	}
	i++;
	j = 0;
	while (buffer[i])
		res[j++] = buffer[i++];
	res[j] = 0;
	free(buffer);
	return (res);
}

char	*read_line(char *buffer)
{
	int		i;
	char	*res;

	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] != '\n' && buffer[i] != 0)
		i++;
	if (i == 0 && buffer[i] == 0)
		return (NULL);
	res = ft_substr(buffer, 0, i + (buffer[i] == '\n'));
	if (!res)
	{
		free(res);
		return (NULL);
	}
	return (res);
}

char	*read_buffer(int fd, char *buffer)
{
	char	*str;
	char	*temp;
	int		bytes;

	str = malloc((BUFFER_SIZE + 1) * sizeof(char));
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
		temp = buffer;
		buffer = ft_strjoin(buffer, str);
		free(temp);
	}
	free(str);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (buffer == NULL)
		buffer = ft_strdup("");
	buffer = read_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = read_line(buffer);
	buffer = new_line(buffer);
	return (line);
}
