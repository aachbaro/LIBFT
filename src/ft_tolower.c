/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:35:07 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/06 19:36:28 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if ((unsigned char)c <= 'Z' && (unsigned char)c >= 'A')
		c += 32;
	return (c);
}

int	main(void)
{
	printf(" %c\n %c", ft_tolower('A'), tolower('A'));
	return (0);
}
