/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:59:11 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/11 17:51:01 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		power(int pow)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (i < pow)
	{
		res = res * 10;
		i++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;
	int		cpy;
	int		neg;

	i = 1;
	j = 0;
	neg = 0;
	cpy = n;
	if (n < 0)
	{
		cpy = -n;
		neg = 1;
		n = -n;
	}
	while (cpy >= 10)
	{
		cpy = cpy / 10;
		i++;
	}
	if (!(str = malloc(sizeof(char) * (i + neg + 1))))
		return (NULL);
	if (neg == 1)
		str[j++] = '-';
	while (i > 0)
		str[j++] = ((n / power(i-- - 1)) % 10) + '0';
	str[j] = 0;
	return (str);
}

int		main(int ac, char **av)
{
	printf("%s", ft_itoa(atoi(av[ac - 1])));
	return (0);
}
