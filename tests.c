/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:40:18 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/05 21:07:17 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

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

int	test_isdigit(void)
{
	const char	*testers;
	int			i;

	testers = "qwertyuiopasdfghjklzxcvbnm"
		"QWERTYUIOPASDFGHJKLZXCVBNM1234567890"
		"<>?:{}!@#$^&*()\n\t\v";
	i = 0;
	if (isdigit('\0') != ft_isdigit('\0'))
	{
		printf("Isdigit Blank string error\n");
		return (0);
	}
	while (i < (int) sizeof(testers))
	{
		if (isdigit(testers[i]) != ft_isdigit(testers[i]))
		{
			printf("Isdigit Error with %c\n", testers[i]);
			return (0);
		}
		i++;
	}
	printf("Isdigit executed successfully\n");
	return (1);
}

int test_memset(void)
{
	char arr[50];
	ft_memset(arr,'0', sizeof(arr));
	printf("Ft memset result %s", arr);
	return (1);
}

int	test_memcpy(void)
{
	const char src[50] = "tytulsjrlfkjnsa";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
	return (1);
}

int	test_memmove(void)
{
	const char src[50] = "tytulsjrlfkjnsa";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memmove dest = %s\n", dest);
	ft_memmove(dest, src, strlen(src)+1);
	printf("After memmove dest = %s\n", dest);
	return (1);
}

int	test_strlcpy(void)
{
	char string[] = "Hello there, Venus";
    char ft_buffer[19];
 	char buffer[19];
	int	cases_num = 5;
	int cases[5] = {0, 1, 3, 18, 19};

	for (int i = 0; i < cases_num; i++)
	{
		ft_strlcpy(ft_buffer,string,cases[i]);
		strlcpy(buffer,string,cases[i]);
		if (strcmp(ft_buffer, buffer) != 0)
			return (0);
		strlcpy(buffer,string,10);
	}
	return (1);
}

int	test_strnstr(void)
{
	
	printf("%s\n", (strnstr("lorem ipsum dolor sit amet", "dolor", 0)));
	printf("%s\n", (ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0)));
	return (1);
}


int	main(void)
{
	// if (!test_isalpha())
	// 	return (1);
	// if (!test_isdigit())
	// 	return (1);
	// if (!test_memset())
	// 	return (1);
	// if (!test_memcpy())
	// 	return (1);
	// if (!test_memmove())
	// 	return (1);
	// if (!test_strlcpy())
	// 	return (1);
	if (!test_strnstr())
		return (1);
	return (0);
}
