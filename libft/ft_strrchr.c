/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:22:04 by tneves            #+#    #+#             */
/*   Updated: 2021/02/24 22:08:30 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*** function returns a pointer to the last occurrence of the character c
*** in the string s.
*/

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last_occurence;

	i = 0;
	last_occurence = NULL;
	while (str[i])
	{
		if (str[i] == c)
			last_occurence = (char*)(str + i);
		i++;
	}
	if (str[i] == c)
		last_occurence = (char *)(str + i);
	return (last_occurence);
}
