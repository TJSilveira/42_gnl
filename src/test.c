#include "get_next_line.h"

int	main()
{
	int		fd;
	char	*line;

	fd = open("./tests/test1",O_RDONLY);
	printf("Read the file\n");
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s\n", line);
		line = get_next_line(fd);
	}
	
}