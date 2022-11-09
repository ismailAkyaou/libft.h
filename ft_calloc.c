/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:47:38 by iakyaou           #+#    #+#             */
/*   Updated: 2022/11/06 22:17:58 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)

{
	void	*str;

	str = malloc(nelem * elsize);
	if (!str)
		return (NULL);
	if (str)
	{
		ft_memset(str, 0, nelem * elsize);
	}
	return (str);
}
