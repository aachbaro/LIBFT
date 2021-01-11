/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:52:11 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/06 18:58:33 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	int		i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while ((size_t)i < n)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str = "Hello World";

	printf("%p", ft_memchr(str, '8', 11));
	return (0);
}
