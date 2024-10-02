/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <dle-fur@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:37:20 by dle-fur           #+#    #+#             */
/*   Updated: 2024/10/01 12:28:28 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	while (dst[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < dstsize)
	{
		dst[i + j] = src[j];
		i++;
	}
	dst[i + j] = '\0';
	return (len_dst + len_src);
}
