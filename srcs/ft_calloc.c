/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:42:53 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/11 18:03:43 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*loc;
	size_t	res;

	res = count * size;
	if (size == 0 || count == 0 || (count != res / size))
		return (NULL);
	loc = (void *) malloc(res);
	if (!loc)
		return (0);
	ft_bzero(loc, res);
	return (loc);
}
