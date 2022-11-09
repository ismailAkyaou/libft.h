/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iakyaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:12:58 by iakyaou           #+#    #+#             */
/*   Updated: 2022/11/08 22:09:59 by iakyaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
// int main()
// {
// 	char str[] = "hello	world";
// 	int fd = open("file.tx", O_CREAT | O_WRONLY | O_RDONLY);
// 	write (fd, str, ft_strlen(str));
// }