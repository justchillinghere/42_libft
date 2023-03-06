/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:24:00 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/06 18:20:30 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	int	free_space;

	free_space = (ft_strlen(s) - (int) start);
	if (free_space <= (int) len)
		return (ft_strdup(s + start));
	substr = (char *)malloc(sizeof(s) * (len + 1));
	if ((void *)0 == substr)
		return ((void *)0);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}