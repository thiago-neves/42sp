/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:01:02 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 22:06:36 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Duplicates a string until length.
*/

char	*ft_strndup(const char *s, size_t length)
{
	char	*new_str;
	int		i;

	if (!(new_str = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	i = -1;
	while (s[++i] && (size_t)i < length)
		new_str[i] = s[i];
	new_str[i] = '\0';
	return (new_str);
}
