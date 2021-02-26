/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:03:01 by tneves            #+#    #+#             */
/*   Updated: 2021/02/26 13:03:05 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
*** Get the first line from string and copies to a new allocated pointer and
*** returns it.
*/

static char		*get_line(char *string)
{
	char	*new_line;
	int		line_length;

	line_length = ft_line_length(string);
	new_line = ft_substr(string, 0, line_length, 0);
	return (new_line);
}

/*
*** Copies the left over of the string after the first line to a new allocated
*** pointer an returns it.
*/

static char		*remove_line(char *string)
{
	int	line_length;
	int	left_over_length;

	line_length = ft_line_length(string);
	left_over_length = ft_strlen(string) - line_length - 1;
	string = ft_substr(string, line_length + 1, left_over_length, string);
	return (string);
}

/*
*** Reads the given file fd with the BUFFER_SIZE and set the **line with the
*** first line encountered, it returns -1 with it had problems during
*** execution, 0 if there's nothing more to read and 1 if there's more to read.
*/

int				get_next_line(int fd, char **line)
{
	static char *saved_buffer;
	char		*buffer;
	int			reader;

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buffer = malloc((BUFFER_SIZE + 1) * sizeof(char))))
		return (-1);
	reader = 1;
	while (reader != 0 && !ft_str_has_line(saved_buffer, '\n'))
	{
		if ((reader = read(fd, buffer, BUFFER_SIZE)) == -1)
		{
			free(buffer);
			return (-1);
		}
		buffer[reader] = '\0';
		saved_buffer = ft_strjoin(saved_buffer, buffer);
	}
	free(buffer);
	*line = get_line(saved_buffer);
	saved_buffer = remove_line(saved_buffer);
	if (reader == 0)
		return (0);
	return (1);
}
