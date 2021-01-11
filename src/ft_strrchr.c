/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 20:07:48 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/06 22:37:54 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*ptr;

	i = 0;
	while (s[i])
		i++;
	ptr = (char *)(s + i);
	while (i >= 0)
	{
		if (*ptr == (const char)c)
			return(ptr);
		i--;
		ptr--;
	}
	return (NULL);
}

int	main(void)
{
	const char	*str1 = "HELLO";

	printf(" %p\n %p\n", ft_strrchr(str1, 'H'), strrchr(str1, 'H'));
	return(0);
}
