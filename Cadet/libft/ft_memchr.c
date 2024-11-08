#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*converted_s;

	uc = (unsigned char ) c;
	converted_s = (unsigned char *) s;
	while (n-- > 0)
	{
		if (*converted_s == uc)
			return (converted_s);
		converted_s++;
	}
	return (NULL);
}
