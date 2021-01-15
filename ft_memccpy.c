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

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int					i;
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
	if ((size_t)i == n && *(ptr1 - 1) != (const unsigned char)c)
		return (NULL);
	return (dest + i);
}
