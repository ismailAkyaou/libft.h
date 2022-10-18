/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:10:53 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/13 21:10:55 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);

    while (i > 0  && s[i] != (char)c)
        i--;
    if (s[i] == c)
        return (char *)(s + i);
    return (0);
}

// int main()
// {
//     char j[] = "hello xworld";
//     char k = 'x' ;
//     printf("%s", ft_strrchr(j,k));
// }

