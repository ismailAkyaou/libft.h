/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:10:26 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/13 19:10:28 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0' && s[i] != c)
    {
       i++;
    }
    if (s[i] == c)
    {
        return (char *)s + i;
    }
    return 0;
}

// int main()
// {
//     char h[] = "absdef";
//     int j = 115;
//     printf("%s", ft_strchr(h, j));
// }