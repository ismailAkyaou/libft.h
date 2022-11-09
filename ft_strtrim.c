/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:53:04 by iakyaou           #+#    #+#             */
/*   Updated: 2022/11/08 00:01:59 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ln1;

	if (!s1)
		return (0);
	if ((!s1) && (!set))
		return (0);
	while (s1[0] && ft_strchr(set, s1[0]))
		s1++;
	ln1 = ft_strlen(s1);
	while (ln1 > 0 && ft_strchr(set, s1[ln1 - 1]))
		ln1--;
	return (ft_substr(s1, 0, ln1));
}
