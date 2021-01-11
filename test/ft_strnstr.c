/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 04:57:36 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/07 05:14:51 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char s2, size_t len)
{
	char	*ptr;
	int	i;

	ptr = (char *)s1;
	i = 0;
	if (!s2)
		return(ptr);
	while (*ptr != 0)
	{
		while (i < len && *(ptr + i) == *(s2 + i))
			i++;
		if (i == len)
			return (ptr);
		else
		{
			i = 0;
			ptr++;
		}
	}
	return (NULL);
}

int	main(int ac, char **av)
{
	printf("%s\n%s", ft_strnstr(av[1], av[2], (av[3][0] - '0')), strnstr(av[1], av[2], (av[3][0] - '0'));
	return (0);
}
