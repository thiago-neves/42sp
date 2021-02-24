/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:01:48 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 20:48:17 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Copies n bytes, each with a value of zero, into string s.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
