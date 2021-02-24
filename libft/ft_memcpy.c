/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:13:44 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 21:20:55 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Copies n characters from memory area src to memory area dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_dest;
	unsigned char *ptr_src;

	ptr_dest = (unsigned char*)dest;
	ptr_src = (unsigned char*)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n-- > 0)
		*(ptr_dest++) = *(ptr_src++);
	return (dest);
}
