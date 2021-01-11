/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:27:45 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/06 18:32:07 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'Z' && c >= 'A'))
		return (1);
	else if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d", ft_isalnum('1'));
	return (0);
}
