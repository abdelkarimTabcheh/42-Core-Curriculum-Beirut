/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:52:36 by atabcheh          #+#    #+#             */
/*   Updated: 2024/06/27 10:53:46 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static size_t	newline_index(char *str, size_t i)
{
	char	*ptr;

	ptr = str + i;
	while (*ptr && *ptr != '\n')
		ptr++;
	if (*ptr == '\n')
		ptr++;
	return (ptr - str);
}

static char	*ft_substr(char *str)
{
	char	*sub;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*str)
		return (free(str), NULL);
	i = newline_index(str, i);
	sub = (char *)malloc((ft_strlen(str) - i) + 1);
	if (!sub)
		return (free(sub), NULL);
	while (*(str + i))
		*(sub + j++) = *(str + i++);
	*(sub + j) = '\0';
	if (!*sub)
		return (free(str), free(sub), NULL);
	free(str);
	return (sub);
}

static char	*read_line(char *str)
{
	char	*line;
	size_t	i;

	i = 0;
	if (!str || *str == '\0')
		return (NULL);
	i = newline_index(str, i);
	line = (char *)malloc(sizeof(char) * i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (*(str + i) && *(str + i) != '\n')
	{
		*(line + i) = *(str + i);
		i++;
	}
	if (*(str + i) == '\n')
	{
		*(line + i) = *(str + i);
		i++;
	}
	*(line + i) = '\0';
	return (line);
}

static char	*free_null(char *buff1, char *buff2)
{
	free(buff1);
	free(buff2);
	buff2 = NULL;
	return (buff2);
}

char	*get_next_line(int fd)
{
	char		*read_content;
	int			read_bytes;
	static char	*read_buffer[MAX_FD];

	read_bytes = 1;
	if (fd < 0 || fd > MAX_FD || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	read_content = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!read_content)
		return (NULL);
	while (!ft_strchr(*(read_buffer + fd), '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, read_content, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			*(read_buffer + fd) = free_null(read_content, *(read_buffer + fd));
			return (NULL);
		}
		read_content[read_bytes] = '\0';
		read_buffer[fd] = ft_strjoin(*(read_buffer + fd), read_content);
	}
	free(read_content);
	read_content = read_line(read_buffer[fd]);
	read_buffer[fd] = ft_substr(read_buffer[fd]);
	return (read_content);
}
