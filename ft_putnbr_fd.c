/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 09:34:20 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/12 09:45:33 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	cpy;

	cpy = n;
	if (cpy < 0)
	{
		write(fd, "-", 1);
		cpy = -cpy;
	}
	if (cpy >= 10)
	{
		ft_putnbr_fd(cpy / 10, fd);
		ft_putnbr_fd(cpy % 10, fd);
	}
	else
		ft_putchar_fd(cpy + '0', fd);
}
