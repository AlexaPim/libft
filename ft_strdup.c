
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

char *ft_strdup(const char *s)
{
	int		size;
	char	*string;
	int		i;

	size = ft_strlen(s);
	string = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (s[i] != '\0')
	{
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

int	main()
{
	char *str = "Douglas";
	char *cpy;

	cpy = ft_strdup(str);
	printf("%s\n", cpy);
}
