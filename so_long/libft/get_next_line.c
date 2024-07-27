/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:20:42 by atabcheh          #+#    #+#             */
/*   Updated: 2024/07/23 14:20:45 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read(int fd, char *src)
{
	char	*buff;
	int		read_bts;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	read_bts = 1;
	while (!ft_chr(src, '\n') && read_bts != 0)
	{
		read_bts = read(fd, buff, BUFFER_SIZE);
		if (read_bts == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_bts] = '\0';
		src = ft_join(src, buff);
	}
	free(buff);
	return (src);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*s;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s = ft_read(fd, s);
	if (!s)
		return (NULL);
	line = ft_get_line(s);
	s = ft_new_line(s);
	return (line);
}
