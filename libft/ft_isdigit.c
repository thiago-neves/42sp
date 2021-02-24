/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:05:00 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 21:03:29 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Check if character is decimal digit.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
