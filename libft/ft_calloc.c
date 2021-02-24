/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:02:07 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 21:03:40 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Allocates the desired memory and sets allocated memory to zero.
*/

void	*ft_calloc(size_t number, size_t size)
{
	char	*result;

	if (!(result = malloc(size * number)))
		return (NULL);
	ft_memset(result, 0, number * size);
	return (result);
}
