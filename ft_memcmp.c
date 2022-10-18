/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:13:25 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/16 16:13:28 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)

{
    size_t			i;
	unsigned char	*a1;
	unsigned char	*a2;
	
	a1 = (unsigned char *)s1;
    a2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
      if ((unsigned char)a1[i] != (unsigned char)a2[i])
        return ((unsigned char)a1[i] - (unsigned char)a2[i]);
        i++;
    }
    return (0);
}


int main()
{
    char h[10] = "hihiai";
    char k[10] = "hihici";
    printf("%d", ft_memcmp(h, k,5));
}