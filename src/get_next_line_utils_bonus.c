#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return NULL;
	if (c == 0)
		return ((char *)&(s[ft_strlen(s)]));
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&(s[i]));
		i++;
	}
	return (NULL);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	int		counter;
	char	*dest;

	if (!s1)
		len_s1 = 0;
	len_s1 = (int)ft_strlen(s1);
	len_s2 = (int)ft_strlen(s2);
	dest = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	counter = 0;
	if (!dest)
		return NULL;
	while (counter < len_s1)
	{
		dest[counter] = s1[counter];
		counter++;
	}
	counter = 0;
	while (counter < len_s2)
	{
		dest[counter + len_s1] = s2[counter];
		counter++;
	}
	dest[counter + len_s1] = 0;
	return (dest);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long	i;
	char			*dest;

	i = 0;
	dest = malloc((len+1)*sizeof(char));
	if (!dest)
		return NULL;
	while (i < (len) && s[i + start])
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

size_t ft_strlen(const char *s)
{
	unsigned long	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		len;
	int		counter;
	char	*dest;

	len = (int)ft_strlen(s);
	dest = malloc((len + 1) * sizeof(char));
	counter = 0;
	if (!dest)
		return NULL;
	while (counter < len)
	{
		dest[counter] = s[counter];
		counter++;
	}
	dest[counter] = 0;
	return (dest);
}