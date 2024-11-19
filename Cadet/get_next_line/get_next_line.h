#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 16
# endif
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);

#endif
