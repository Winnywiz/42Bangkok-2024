#include "get_next_line.h"

static char	*append(char *content, char *buffer, size_t b_len)
{
	size_t	c_len;
	char	*tmp;
	size_t	i;
	size_t	j;

	c_len = ft_strlen(content);
	tmp = ft_calloc(b_len + c_len + 2, sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < c_len)
	{
		tmp[i] = content[i];
		i++;
	}
	j = 0;
	while (j < b_len)
		tmp[i++] = buffer[j++];
	if (buffer[b_len] == '\n')
		tmp[i++] = '\n';
	free(content);
	return (tmp);
}

static char	*append_n_shift(char *content, char *buffer)
{
	size_t	b_len;
	size_t	start_len;
	char	*start;
	char	*tmp;

	b_len = 0;
	while (buffer[b_len] != '\n' && buffer[b_len])
		b_len++;
	tmp = append(content, buffer, b_len);
	if (!tmp)
		return (NULL);
	start = buffer + b_len + (buffer[b_len] == '\n');
	start_len = ft_strlen(start);
	ft_memmove(buffer, start, start_len + 1);
	return (tmp);
}

static char	*read_contents(int fd, char *buffer)
{
	char	*content;
	ssize_t	byte;
	size_t	buffer_len;

	content = ft_calloc(1, sizeof(char));
	while (1)
	{
		buffer_len = ft_strlen(buffer);
		if (buffer_len < BUFFER_SIZE)
		{
			byte = read(fd, buffer + buffer_len, BUFFER_SIZE - buffer_len);
			if (byte == -1)
			{
				free(content);
				return (NULL);
			}
			buffer[buffer_len + byte] = 0;
		}
		if (buffer[0] == 0)
			break ;
		content = append_n_shift(content, buffer);
		if (!content || ft_strchr(content, '\n'))
			break ;
	}
	return (content);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!buffer)
		buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	line = read_contents(fd, buffer);
	if (ft_strlen(line) == 0)
	{
		free(buffer);
		free(line);
		buffer = 0;
		return (NULL);
	}
	return (line);
}
