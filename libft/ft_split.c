/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:16:44 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 21:43:04 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Allocates and returns an arrayof strings obtained by splitting s using
*** the character c as a delimiter. The array must beended by a NULL pointer.
*/

static int			nbarrays(char const *s, char c)
{
	int	i;
	int	is_delimiter;
	int	count;

	count = 0;
	i = 0;
	is_delimiter = 1;
	if (*s == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			is_delimiter = 1;
		else if (is_delimiter)
		{
			is_delimiter = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static int			nbchar(char const *string, char c, int i)
{
	int length;

	length = 0;
	while (string[i] != c && string[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

static char			**ft_free(char const **array, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)array[j]);
	}
	free(array);
	return (NULL);
}

static char			**populate(char const *s, char **array, char c, int length)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < length)
	{
		k = 0;
		while (s[i] == c)
			i++;
		array[j] = (char *)malloc(sizeof(char) * nbchar(s, c, i) + 1);
		if (array[j] == NULL)
			return (ft_free((char const **)array, j));
		while (s[i] != '\0' && s[i] != c)
			array[j][k++] = s[i++];
		array[j][k] = '\0';
		j++;
	}
	array[j] = 0;
	return (array);
}

char				**ft_split(char const *s, char c)
{
	char	**array;
	int		length;

	if (s == NULL)
		return (NULL);
	length = nbarrays(s, c);
	array = (char **)malloc(sizeof(char *) * (length + 1));
	if (array == NULL)
		return (NULL);
	return (populate(s, array, c, length));
}
