/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:59:45 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/06 19:22:53 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_memcmp(void *s1, const void *s2, size_t n)
{
	int			i;
	unsigned char		*ptr;
	const unsigned char	*ptr1;

	i = 0;
	ptr = s1;
	ptr1 = s2;
	while ((size_t)i < n)
	{
		if (*ptr < *ptr1)
			return (-1);
		else if (*ptr > *ptr1)
			return (1);
		i++;
		ptr++;
		ptr1++;
	}
	return (0);
}

int	main(void)
{
	char	*str = "Hello";
	char	*str1 = "Hello";

	printf(" %d\n %d\n", ft_memcmp(str, str1, 7), memcmp(str, str1, 7));
	return (0);
}
