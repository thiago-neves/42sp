/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:22:48 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 22:09:54 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Allocates and returns a copy of s1 with the characters specified in set
*** removed from the beginning and the end of the string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		beg;
	int		end;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	while (s1[beg] && ft_strchr(set, s1[beg]))
		beg++;
	end = ft_strlen(s1 + beg);
	if (end)
		while (s1[end + beg - 1] != 0 && ft_strchr(set, s1[end + beg - 1]) != 0)
			end--;
	if (!(new_str = malloc(sizeof(char) * end + 1)))
		return (NULL);
	ft_strncpy(new_str, s1 + beg, end);
	new_str[end] = '\0';
	return (new_str);
}
