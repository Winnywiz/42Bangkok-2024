#include <stdint.h>
#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	length;

	if (str == 0)
		return (0);
	length = 0;
	while (str[length])
		length++;
	return (length);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			index;

	if (count == 0 || size == 0)
		return (NULL);
	if (size > SIZE_MAX / count)
		return (NULL);
	tmp = (unsigned char *) malloc(count * size);
	if (!tmp)
		return (NULL);
	index = 0;
	while (index < count * size)
		tmp[index++] = 0;
	return ((void *) tmp);
}

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

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			char_c;

	i = 0;
	char_c = (char) c;
	if (char_c == '\0')
		return ((char *)&s[i] + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == char_c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
