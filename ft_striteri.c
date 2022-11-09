/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:18:45 by iakyaou           #+#    #+#             */
/*   Updated: 2022/11/08 23:14:45 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
// void ft_ismail(unsigned int i, char *s1)
// {
// 	printf("i = %u\n", i);
// }
// int main()
// {
// 	char str[] = "ABCDEF";
// 	ft_striteri(str, ft_ismail);
// }