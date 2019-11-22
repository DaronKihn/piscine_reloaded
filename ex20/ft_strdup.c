/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:13:49 by dkihn             #+#    #+#             */
/*   Updated: 2018/11/22 17:04:23 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src) + 1;
	p = (char*)malloc(sizeof(char) * size);
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = src[i];
	return (p);
}
