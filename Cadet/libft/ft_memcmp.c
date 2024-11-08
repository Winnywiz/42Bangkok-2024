#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	ucs1 = (unsigned char *) s1;
	ucs2 = (unsigned char *) s2;
	index = 0;
	while (index < n)
	{
		if (ucs1[index] != ucs2[index])
			return ((unsigned char) ucs1[index] - (unsigned char) ucs2[index]);
		index++;
	}
	return (0);
}
