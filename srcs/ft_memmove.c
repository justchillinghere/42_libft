/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:48:00 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/03 18:27:33 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memmove(void *dst, const void *src, size_t len)
{
	char		*cdst;
	const char	*csrc;

	if (dst > src)
	{
		cdst = dst + len;
		csrc = src + len;
		while (len-- > 0)
			*--cdst = *--csrc; // pre-increment cause len is one byte more than the last character
	}
	else 
	{
		cdst = dst;
		csrc = src;
		ft_memcpy(cdst, csrc, len);
	}
	return (dst);
}