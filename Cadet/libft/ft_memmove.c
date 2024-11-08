#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*_dst;
	unsigned char	*_src;

	index = 0;
	_dst = (unsigned char *) dst;
	_src = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (_dst > _src)
		while (len-- > 0)
			_dst[len] = _src[len];
	else
	{
		while (index < len)
		{
			_dst[index] = _src[index];
			index++;
		}
	}
	return (dst);
}
