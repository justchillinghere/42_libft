/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:19:23 by luchitel          #+#    #+#             */
/*   Updated: 2023/02/01 16:38:40 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_found(char to_find, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
			return (1);
		i++;
	}
	return (0);
}

int	words_count(char *str, char *charset)
{
	int	i;
	int	words_count;

	i = 0;
	words_count = 0;
	while (str[i])
	{
		while (is_found(str[i], charset) && str[i])
			i++;
		if (!is_found(str[i], charset) && str[i])
		{
			words_count++;
			while (!is_found(str[i], charset) && str[i])
				i++;
		}
	}
	return (words_count);
}

char	*get_word(char *str, int begin, int end)
{
	char	*out;
	int		i;

	out = (char *)malloc(sizeof(char) * (end - begin) + 1);
	i = 0;
	while (begin < end)
	{
		out[i] = str[begin];
		begin++;
		i++;
	}
	out[i] = '\0';
	return (out);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		word_begin;
	int		words;
	int		index;

	i = 0;
	word_begin = 0;
	index = 0;
	words = words_count(str, charset);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);
	while (str[i] && index < words)
	{
		while (is_found(str[i], charset) && str[i])
			i++;
		word_begin = i;
		while (!is_found(str[i], charset) && str[i])
			i++;
		result[index] = get_word(str, word_begin, i);
		index++;
	}
	result[index] = 0;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*str2;
	char	*charset;
	char	**result;
	int		i;

	str = "#hello!_it$$is___a*n!example!";
	str2 = "";
	charset = "#_!$$*";
	i = 0;
	result = ft_split(str, charset);
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
} 
*/
