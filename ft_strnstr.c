/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:32:31 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/16 21:32:33 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t needle_len;
    char *str;

    i = 0;
    needle_len = ft_strlen(needle);
    str = (char*)haystack;
    if (needle_len == 0)
        return (str);
    while (i < len  && needle_len + i <= ft_strlen(haystack))
    {
        if (ft_strncmp(str + i, needle, needle_len) == 0)
            return (str + i);
        i++;
    }
    return NULL;
}

// int main()
// {
//     char h[] = "abc";
//     char j[] = "s";
//     printf("%s\n", ft_strnstr(h, j,6));
//     printf("%s\n", strnstr(h, j,6));
// }