#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*_b;

	i = 0;
	_b = (unsigned char *) b;
	while (i < len)
		_b[i++] = (unsigned char) c;
	return (b);
}
