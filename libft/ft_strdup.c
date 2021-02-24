/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:17:31 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 21:46:04 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Duplicates the given string s.
*/

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*new_str;
	int		i;

	length = 0;
	while (s[length])
		++length;
	new_str = malloc(sizeof(char) * (length + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
