/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:17:46 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/13 23:17:57 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    unsigned char *ss1 = (unsigned char *)s1;
    unsigned char *ss2 = (unsigned char *)s2;

    i = 0;
    while ((ss1[i] || ss2[i]) && i < n)
    {
        if (ss1[i]!= ss2[i])
             return (ss1[i] - ss2[i]);
        i++;
    }
    return (0);
}

// int main()
// {
//     char s1[] = "mailaki";
//      char s2[] = "iqmcilaki";
//     printf("%i\n", ft_strncmp(0, 0,3));
//     printf("%i", strncmp(0, 0,3));
// }

