/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:34:24 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/04 17:35:43 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * restrict dest, const char * restrict src, size_t dstsize)
{
	int	len;

	len = ft_strlen(src);
	if (len < (int) dstsize)
	{
		ft_memcpy(dest, src, len);
		dest[len] = '\0';
	}
	else if(dstsize != 0)
	{
		ft_memcpy(dest, src, dstsize - 1);
		dest[dstsize - 1] = '\0';
	}
	return (len);
}