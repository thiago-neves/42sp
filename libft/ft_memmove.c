/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:14:09 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 21:25:28 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Copies n characters from src to dest, but for overlapping memory blocks,
*** memmove() is a safer approach than memcpy().
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_src < ptr_dest)
		while (++i <= n)
			ptr_dest[n - i] = ptr_src[n - i];
	else
		return (ft_memcpy(ptr_dest, ptr_src, n));
	return (dest);
}
