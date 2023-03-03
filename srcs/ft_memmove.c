/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:48:00 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/03 17:44:09 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memmove(void *dst, const void *src, size_t len)
{
	char		*cdst;
	const char	*csrc;

	cdst = dst;
	csrc = src;
	if (cdst == csrc)
		return (dst);
	if (cdst > csrc)
	{
		while (len > 0)
		{
			cdst[len - 1] =  csrc[len - 1];
			len--;
		}

	}
	else 
		ft_memcpy(cdst, csrc, len);
	return (dst);
}