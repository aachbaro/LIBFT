/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:06:44 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/06 15:15:55 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while ((size_t)i < n)
	{
		*ptr = 0;
		i++;
		ptr++;
	}
}

int	main(void)
{
	char *str;

	str = malloc(sizeof(char) * 5);
	ft_bzero(str, 5);
	while(*str == 0)
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}
