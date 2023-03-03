/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:52:30 by luchitel          #+#    #+#             */
/*   Updated: 2023/02/23 00:04:16 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	test_isalpha(void)
{
	const char	*testers;
	int			i;

	testers = "qwertyuiopasdfghjklzxcvbnm"
		"QWERTYUIOPASDFGHJKLZXCVBNM1234567890"
		"<>?:{}!@#$^&*()\n\t\v";
	i = 0;
	if (isalpha('\0') != ft_isalpha('\0'))
	{
		printf("Isalpha Blank string error\n");
		return (0);
	}
	while (i < (int) sizeof(testers))
	{
		if (isalpha(testers[i]) != ft_isalpha(testers[i]))
		{
			printf("Isalpha Error with %c\n", testers[i]);
			return (0);
		}
		i++;
	}
	printf("Isalpha executed successfully\n");
	return (1);
}