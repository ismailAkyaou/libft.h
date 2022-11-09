/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:36:57 by iakyaou           #+#    #+#             */
/*   Updated: 2022/11/08 21:52:24 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {
// 	char str[] = "hello world";
// 	int fd = open("file.txt", O_CREAT | O_RDONLY | O_WRONLY);
// 	write(fd, str, ft_strlen(str));
// }
