/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:06:04 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 21:02:42 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** Converts integer to string.
*/

static int	get_number(int nb)
{
	if (nb == 0)
		return (1);
	return (1 + get_number(nb / 10));
}

static char	*affect(char *s, int num, int i)
{
	unsigned	l;

	l = 0;
	if (num == 0)
		*s = num + 48;
	else if (num < 0)
	{
		*s = '-';
		l = num * (-1);
	}
	else
		l = num;
	s[i + 1] = '\0';
	while (l != 0)
	{
		s[i] = l % 10 + 48;
		l = l / 10;
		i--;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*dst;

	if (n > 0)
		len = get_number(n) - 1;
	else
		len = get_number(n);
	dst = (char *)ft_calloc(sizeof(char), len + 1);
	if (dst == NULL)
		return (NULL);
	return (affect(dst, n, len - 1));
}
