/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:54:32 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/06 20:06:29 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((size_t)i < n)
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "Hello";

	printf(" %d\n %d", ft_strncmp(str1, str2, 243), strncmp(str1, str2, 243)); 
}
