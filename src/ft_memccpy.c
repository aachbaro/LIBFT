/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:51:40 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/06 16:10:50 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int			i;
	unsigned char		*ptr;
	const unsigned char	*ptr1;

	i = 0;
	ptr = dest;
	ptr1 = src;
	while (((size_t)i < n && *(ptr1 - 1) != (const unsigned char)c))
	{
		*ptr = *ptr1;
		i++;
		ptr++;
		ptr1++;
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
	ft_memccpy(str, str1, '2', 4);
	while (*str == '1' || *str == '2' || *str == '3')
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}
