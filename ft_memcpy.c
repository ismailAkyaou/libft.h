/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:53:42 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/12 19:53:46 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *d;
    char *s;

    d = (char *)dest;
    s = (char *)src;

    if(!d && !s)
    {
        return (NULL);
    }
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return d;
}
// int main()
// {
//    char dest[10] = "ouzil";
//    char src[10] = "akyaou";
//    printf("%s", ft_memcpy(0, 0,10));
//    //printf("%s", memcpy(0, 0,10));
//    return 0;
// }

