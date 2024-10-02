/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <dle-fur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:58:16 by dle-fur           #+#    #+#             */
/*   Updated: 2024/10/02 13:32:50 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
	{
		return ((char *)(haystack));
	}
	while (haystack[i] != '\0' && i < n)
	{
		if (needle[j] == haystack[i + j] && haystack[i + j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)(haystack + i));
		}
	}
	return (NULL);
}
