/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:12:51 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/17 12:12:59 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat (char *dst, const char *src, size_t size)
{
    size_t len_src;
    size_t i;
    size_t len_dest;

    i = 0;
    if (!size)
        return (ft_strlen(src) + size);
    len_src = ft_strlen(src);
    len_dest = ft_strlen(dst);
    if (size < len_dest)
        return (len_src + size);
    while (src[i] && i < size - len_dest - 1)
    {
        dst[len_dest + i] = src[i];
        i++;
    }
    dst[len_dest + i] = 0;
    return (len_dest + len_src);
}
// int main(void)
// {
//     char *str = "is me and you is my friend";
//     char dest[] = "ismail";
//     char dest1[] = "ismail";
//     printf("%zu ----- %s\n", ft_strlcat(dest, str ,7),dest);
//     printf("%zu ----- %s\n", strlcat(dest1, str ,7),dest1);
// }


