/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:32:31 by iakyaou           #+#    #+#             */
/*   Updated: 2022/11/08 00:01:43 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;
	size_t	haystack_len;
	char	*str;

	i = 0;
	needle_len = ft_strlen(needle);
	str = (char *)haystack;
	if (needle_len == 0)
		return (str);
	if (len == 0)
		return (0);
	haystack_len = ft_strlen(haystack);
	while (i < len && i + needle_len <= haystack_len && i + needle_len <= len)
	{
		if (ft_strncmp(str + i, needle, needle_len) == 0)
			return (str + i);
		i++;
	}
	return (NULL);
}
