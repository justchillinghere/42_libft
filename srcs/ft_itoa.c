/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:18:21 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/07 19:10:16 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_str_rev_digits(char *temp, int nbr)
{
	int	i;
	
	i = 0;
	if (nbr == -2147483648)
		return ("8463847412");
	else if (nbr < 0)
		nbr = -nbr;
	if (nbr == 0)
		return ("0");
	while(nbr > 0)
	{
		temp[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	temp[i] = '\0';
	return (temp);
}

char	*ft_itoa(int nbr)
{
	char *result;
	char *temp;
	int	i;
	int	j;

	temp = (char *)malloc(sizeof(char) * 12);
	result = (char *)malloc(sizeof(char) * 12);
	if (!result || !temp)
		return (NULL);
	temp = ft_str_rev_digits(temp, nbr);
	i = ft_strlen(temp) - 1;
	j = 0;
	if (nbr < 0)
		result[j++] = '-';
	while (i > -1)
		result[j++] = temp[i--];
	result[j] = '\0';
	return (result);
}
