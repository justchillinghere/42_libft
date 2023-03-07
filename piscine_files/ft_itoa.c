/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:45:12 by luchitel          #+#    #+#             */
/*   Updated: 2023/02/02 15:04:20 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_get_reversed_digits(char *temp, int *i, int nbr)
{
	int	digit;

	digit = nbr;
	if (nbr == -2147483648)
	{
		*i = 11;
		temp = "-2147483648";
	}
	if (nbr < 0)
	{	
		temp[0] = '-';
		nbr = -nbr;
	}
	while(digit > 0)
	{
		temp[*i] = digit % 10 + '0';
		digit /= 10;
		*i = *i + 1;
	}
	temp[*i] = '\0';
}

char	*ft_itoa(int nbr)
{
	char *result;
	char temp[12];
	int	i;
	int	j;

	i = 1;
	ft_get_reversed_digits(temp, &i, nbr);
	result = (char *)malloc(sizeof(char) * i + 1);
	if (result == NULL)
		return (NULL);
	j = 0;
	if (nbr < 0)
	{	
		result[0] = temp[0];
		j = 1;
	}
	while (i > 0)
	{
		--i;
		result[j] = temp[i];
		j++;
	}
	result[j] = '\0';
	return (result);
}

int	main(void)
{
	int	num;

	num = -12345;
	printf("%s\n", ft_itoa(num));
	return (0);
}
