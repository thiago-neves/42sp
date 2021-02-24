/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:18:56 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 21:46:45 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Joins the strings s1 and s2 into a new string.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*new_str;
	size_t	i;

	size = ft_strlen(s1) + ft_strlen(s2);
	new_str = ft_calloc(size + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	i = ft_strlen(new_str);
	ft_strlcat(new_str, s2, size + 1);
	return (new_str);
}
