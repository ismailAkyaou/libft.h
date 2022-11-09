/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:01:56 by iakyaou           #+#    #+#             */
/*   Updated: 2022/11/07 12:02:03 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	conut(int c)
{
	int	cont;

	cont = 0;
	while (c != 0)
	{
		c = c / 10;
		cont++;
	}
	return (cont);
}

static char	*ft_aloc(int c, int cont)
{
	char	*n;
	int		i;

	i = 0;
	if (c < 0)
	{
		n = (char *)malloc(sizeof(char) * (cont + 2));
		if (!n)
			return (NULL);
		n[0] = '-';
		c *= -1;
		cont++;
	}
	else
		n = (char *)malloc(sizeof(char) * (cont + 1));
	if (!n)
		return (NULL);
	while (c != 0 && conut > 0)
	{
		n[cont - 1 - i] = (c % 10) + '0';
		c /= 10;
		i++;
	}
	n[cont] = '\0';
	return (n);
}

char	*ft_itoa(int n)
{
	int	cont;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	cont = conut(n);
	return (ft_aloc(n, cont));
}
