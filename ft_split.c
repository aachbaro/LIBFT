/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachabaro@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:36:50 by aachbaro          #+#    #+#             */
/*   Updated: 2021/01/08 18:08:10 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	word_count(const char *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		while (str[i] != sep)
			i++;
		words++;
	}
	if (str[i - 1] == sep)
		words--;
	return (words);
}

char	**ft_split(const char *s, char c)
{
	int	k;
	int	i;
	int	j;
	char	**tab;

	k = 0;
	i = 0;
	if (!(tab = malloc(sizeof(char *) * (word_count(s, c) + 1))))
		return (NULL);
	while (k < word_count(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		if (!(tab[k] = malloc(sizeof(char) * (j - i + 1))))
			return (NULL);
		j = 0;
		while (s[i] != c && s[i])
			tab[k][j++] = s[i++];
		tab[k++][j] = 0;
	}
	tab[k] = NULL;
	return (tab);
}

int	main(int ac, char **av)
{
	int	i;
	char **tab;

	i = 0;
	tab = ft_split(av[ac - 1], ' ');
	while (i <= word_count(av[ac - 1], ' '))
	{
		printf("%s", tab[i]);
		i++;
	}
	return (0);
}
