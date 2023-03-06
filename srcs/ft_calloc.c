/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:42:53 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/06 13:29:10 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*loc;
	size_t	loc_amount;

	loc_amount = size * count;
	loc = (void *) malloc(loc_amount);
	if (!loc)
		return (NULL);
	ft_bzero(loc, loc_amount);
	return (loc);
}
