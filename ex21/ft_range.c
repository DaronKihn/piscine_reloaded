/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:05:13 by dkihn             #+#    #+#             */
/*   Updated: 2018/11/22 16:35:17 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size;
	int *p;
	int i;

	i = 0;
	size = max - min + 1;
	if (min >= max)
		return (0);
	p = (int*)malloc(sizeof(int) * (size));
	while (i < size)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
