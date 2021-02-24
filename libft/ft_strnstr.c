/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:21:57 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 22:07:30 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Locates the first occurrence of the null-terminated string little
*** in the null-terminated string big.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	if (little[i] == '\0')
		return ((char*)big);
	if (big == NULL && len == 0)
		return (NULL);
	while (0 < len && big[i] != '\0')
	{
		j = 0;
		l = len;
		while (big[i + j] == little[j] && l > 0)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
			l--;
		}
		i++;
		len--;
	}
	return (NULL);
}
