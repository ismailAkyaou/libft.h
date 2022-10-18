/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:13:28 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/15 22:13:30 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
    str = (char *)s;
    while (i < n)
    {
        if (str[i] == c)
            return (void *)(str + i);
        i++;
    }
    return 0;
}
// int main(void)
// {
//     char *k = "absd";
//     char *j = "absg";
//     printf("%s", (char *) ft_memchr(k, 's', 3));
//     return 0;
// }

