/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 14:27:50 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/07 14:48:15 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int	i;

	ptr = malloc(size * nmemb);
	i = 0;
	while (i <= nmemb)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

int	main(void)
{
	void	*ptr;
	int	i;

	ptr = calloc(0, sizeof(int));
	i = 0;
	while (i < 5)
	{
		write(1, (ptr + i), 1);
		i++;
	}
	return (0);
}
