/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:40:18 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/12 14:18:38 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	test_calloc(void)
{
	void	*ex;
	
	ex = calloc(0,0);
	if (ex == NULL)
		printf("NULL\n");
	return (1);
}

int	main(void)
{
	if (!test_calloc())
		return (1);
	return (0);
}
