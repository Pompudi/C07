#include <stdlib.h>

int f_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i + 1);
}

void strcpu(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
		j++;
	}
}


char	*ft_strdup(char *src)
{
	char *str;
	str = malloc(f_strlen(src));
	if (str == NULL)
		return (NULL);
	strcpu(src, str);
	return (str);
}
