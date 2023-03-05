/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 09:08:24 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/05 09:15:50 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const char	*ch;
	
	i = 0;
	ch = s;
	while (i < n)
	{
		if (ch[i] == c)
			return ((void *) (s + i));
		i++;
	}
	return (NULL);
}