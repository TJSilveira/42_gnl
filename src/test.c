#include "get_next_line.h"

void	stdin_opt()
{
	char	*line;
	
	printf("\nSTDIN test\n\n");
	while ((line = get_next_line(0)))
	{
		printf("%s", line);
	}
}

#ifdef NORMAL
int	main()
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open("./tests/test1",O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);
	i = 0;
	fd = open("./tests/test2.txt",O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s\n\n", line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);
	i = 0;
	fd = open("./tests/test3.txt",O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s\n\n", line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);
}
#endif

#ifdef STDIN
int	main()
{
	stdin_opt();
}
#endif