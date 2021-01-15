/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 09:57:59 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/15 12:04:52 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*str;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	size = ft_strlen(s1);
	while (size > 0 && ft_strchr(set, s1[size]))
		size--;
	str = ft_substr((char*)s1, 0, size + 1);
	return (str);
}
/*
**int		main(void)
**{
**	ft_putstr_fd(ft_strtrim("lorem ipsum dolor sit am", "am"), 1);
**	return (0);
**}
*/
