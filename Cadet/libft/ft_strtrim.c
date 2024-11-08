#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]) && s1[j - 1])
		j--;
	tmp = (char *) ft_calloc(j - i + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, s1 + i, j - i);
	return (tmp);
}
