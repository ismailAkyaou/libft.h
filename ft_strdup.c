/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:01:48 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/17 23:01:51 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char *s;
    char *src;
    size_t i;
    size_t x;

    s = (char *)s1;
    i = 0;
    x = ft_strlen(s) + 1;
    src = malloc(x);

    if (src == 0)
    {
        return (NULL);
    }
    while (s[i] && i <= x)
    {
        src[i] = s[i];
        i++;
    }
    src[i] = '\0';
    return (src);
 }