/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 16:25:24 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/06 16:33:21 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	unsigned char		*ptr;
	const unsigned char	*ptr1;
	unsigned char		*tmp;

	i = 0;
	ptr = dest;
	ptr1 = src;
	while ((size_t)i < n)
	{
		*(tmp + i) = *(ptr1 + i);
		i++;
	}
	i = 0;
	while ((size_t)i < n)
	{
		*(ptr + i) = *(tmp + i);
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	*str;
	char	*str1;
	int	i;

	i = 0;
	printf("\nOK\n");
	str = malloc(sizeof(char) * 10);
	str1 = malloc(sizeof(char) * 10);
	printf("\nOK\n");
	while (i < 5)
	{
		*(str + i) = '1';
		*(str1 + i) = '2';
	//	if (i == 3)
	//		*(str1 + i) = '3';
		i++;
	}
	printf("\nOK\n");
	memmove(str, str1, 0);
	while (*str == '1' || *str == '2')
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}
