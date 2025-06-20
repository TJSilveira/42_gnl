#include "get_next_line.h"

void	stdin_opt(void)
{
	char	*line;

	while ((line = get_next_line(0)))
	{
		printf("%s", line);
	}
}

#ifdef NORMAL
int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open("./tests/test1", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);
	i = 0;
	fd = open("./tests/test2.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);
	i = 0;
	fd = open("./tests/test3.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);
	
	/* 1-brouette.txt */
	i = 0;
	fd = open("./tests/1-brouette.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 2-otarie.txt */
	i = 0;
	fd = open("./tests/2-otarie.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 3-oneline.txt */
	i = 0;
	fd = open("./tests/3-oneline.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 4-u.txt */
	i = 0;
	fd = open("./tests/4-u.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 5-empty.txt */
	i = 0;
	fd = open("./tests/5-empty.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 6-newline.txt */
	i = 0;
	fd = open("./tests/6-newline.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 7-onechar.txt */
	i = 0;
	fd = open("./tests/7-onechar.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 8-twochar.txt */
	i = 0;
	fd = open("./tests/8-twochar.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 9-linew.txt */
	i = 0;
	fd = open("./tests/9-linew.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 10-b.txt */
	i = 0;
	fd = open("./tests/10-b.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 11-bg.txt */
	i = 0;
	fd = open("./tests/11-bg.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);

	/* 12-bigben.txt */
	i = 0;
	fd = open("./tests/12-bigben.txt", O_RDONLY);
	line = get_next_line(fd);
	if (fd == -1)
	{
		return (0);
	}
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n%i\n", i);
	close(fd);
}
#endif

#ifdef STDIN
int	main(void)
{
	stdin_opt();
}
#endif
