/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:53:27 by iakyaou           #+#    #+#             */
/*   Updated: 2022/10/18 17:53:29 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t    i;
    i = 0;
    if (!s)
        return (0);
    if (start >= (ft_strlen(s)))
        len = 0;
    if (ft_strlen(s) - start < len)
        len = ft_strlen(s) - start - 1;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (0);
    
    while (s[i] && i < len)
    {
        str[i] = s[start + i];
        i++;  
    }
    str[i] = '\0';
    return (str);        
}
// int main()
// {
//     char *str =  "ismail";

//     printf("%s\n", ft_substr(str, 3, 2));
//     return 0;
// }
