/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 08:45:17 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/07 16:24:42 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*dup;

	dup = ft_strdup(s1);
	len = ft_strlen(dup);
	while (ft_strchr(set, *dup) && *dup)
		dup++;
	while (ft_strchr(set, dup[len - 1]))
	{	
		dup[len - 1] = '\0';
		len--;
	}
	return (dup);
}
