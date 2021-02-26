/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 23:17:07 by tneves            #+#    #+#             */
/*   Updated: 2021/02/26 12:58:16 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
*** See if the given string str has the char c.
*/

int		ft_str_has_line(const char *str, int c)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*
*** Return the length of the first \n on string or the full string length if it
*** doesn't find any.
*/

size_t	ft_line_length(const char *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}

/*
*** return the full length of string s.
*/

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != 0)
		i++;
	return (i);
}

/*
*** Copies into a new allocated string the string s from the start(parameter)
*** until len and frees the strfree.
*/

char	*ft_substr(char const *s, unsigned int start, int len, char *strfree)
{
	size_t	length;
	char	*str;
	size_t	i;

	if (s == NULL || len < 0)
	{
		free(strfree);
		return (0);
	}
	length = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		free(strfree);
		return (0);
	}
	i = 0;
	while (len-- > 0 && start < length)
		str[i++] = s[start++];
	str[i] = '\0';
	free(strfree);
	return (str);
}

/*
*** Joins the string s1 and s2 into a new allocated string and frees the s1.
*/

char	*ft_strjoin(char *s1, const char *s2)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc(sizeof(char) * (len + 1))))
	{
		free(s1);
		return (0);
	}
	i = 0;
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	free(s1);
	return (str);
}
