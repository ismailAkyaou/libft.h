/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:44:04 by iakyaou           #+#    #+#             */
/*   Updated: 2022/11/08 00:00:47 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a1;
	char	*p2;

	a1 = (char *)dest;
	p2 = (char *)src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else if (dest > src)
		while (n--)
			a1[n] = p2[n];
	return (dest);
}
