#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*_dst;
	unsigned char	*_src;

	_dst = (unsigned char *) dst;
	_src = (unsigned char *) src;
	if (dst == (void *) 0 && src == (void *) 0)
		return (dst);
	while (n > 0)
	{
		*(_dst++) = *(_src++);
		n--;
	}
	return (dst);
}
