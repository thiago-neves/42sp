/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:12:23 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 21:13:44 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Compares the first n bytes of memory area s1 and memory area s2.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	j = 0;
	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			j = ptr1[i] - ptr2[i];
			return (j);
		}
		++i;
	}
	return (0);
}
