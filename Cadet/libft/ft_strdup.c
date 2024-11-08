#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		index;
	char	*new_ptr;

	new_ptr = (char *) malloc(ft_strlen(src) + 1);
	if (!new_ptr)
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		new_ptr[index] = src[index];
		index++;
	}
	new_ptr[index] = '\0';
	return (new_ptr);
}
