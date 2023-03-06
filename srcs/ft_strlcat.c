/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:38:27 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/05 21:28:16 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize) // dstsize - size of dst (buffer), used to control the overflow
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	/*
		If dstsize is 0 or the original dst string is longer than dstsize
		(in practice this should not happen as it means that either dstsize
		is incorrect or that dst is not a proper string
	*/
	if (dstsize <= dest_len) 
		return (dstsize + src_len); // return the total length of the string tried to create. Dstsize is always a "correct" size of the dst string
	i = 0;
	while (src[i] && ((dest_len + i) < (dstsize - 1)))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}