/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:04:37 by luchitel          #+#    #+#             */
/*   Updated: 2023/01/28 20:01:55 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = str[i];
	return (dest);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		len;

	len = ft_strlen(src);
	duplicate = (char *)malloc(sizeof(src) * (len + 1));
	if ((void *)0 == duplicate)
		return ((void *)0);
	ft_strcpy(duplicate, src);
	return (duplicate);
}
