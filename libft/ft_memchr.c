/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:11:47 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 21:22:31 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Searches for the first occurrence of the character c (an unsigned char)
*** in the first n bytes of the string pointed to, by the argument s.
*/

char	*ft_memchr(void *s, char c, int n)
{
	int		i;
	char	*ptr;

	ptr = (char*)s;
	i = 0;
	while (n > i)
	{
		if (ptr[i] == c)
			return (void *)(ptr + i);
		++i;
	}
	return (NULL);
}
