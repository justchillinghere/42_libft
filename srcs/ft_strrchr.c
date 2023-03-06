/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:03:43 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/06 09:33:52 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_pos;

	i = 0;
	last_pos = -1;
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (s[i])
	{
		if (s[i] == c)
			last_pos = i;
		i++;
	}
	if (last_pos != -1)
		return ((char *)(s + last_pos));
	else
		return (NULL);
}
