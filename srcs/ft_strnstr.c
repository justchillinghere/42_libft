/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 13:08:43 by luchitel          #+#    #+#             */
/*   Updated: 2023/03/05 21:15:38 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	needle_len;
	
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *) haystack);
	while (*haystack && ((int) len - needle_len) > 0)
	{	
		if ((haystack[0] == needle[0]) && (ft_strncmp(haystack, needle, needle_len) == 0))
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
