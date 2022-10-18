/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:55:00 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/12 00:55:04 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlen(const char *s)
{
    size_t i;
    
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
//int main(int argc, char **argv)
//{
//    char *hhh = "hello world";
//    printf("%zu\n", ft_strlen(hhh));
//}
