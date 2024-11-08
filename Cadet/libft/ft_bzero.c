#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*_s;

	index = 0;
	_s = (unsigned char *) s;
	while (index < n)
		_s[index++] = 0;
}
