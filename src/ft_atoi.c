/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 04:39:06 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/07 04:54:02 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	nbr;

	i = 0;
	neg = 1;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' ||
			str[i] == '\r' || str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			neg == -1;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * neg);
}

int	main(int ac, char **av)
{
	printf("%d", ft_atoi(av[ac - 1]));
	return (0);
}
