/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <dle-fur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:34:25 by dle-fur           #+#    #+#             */
/*   Updated: 2024/10/02 14:00:42 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr_dst;
	char	*ptr_src;
	size_t	i;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	i = 0;
	if (dst == NULL || src == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	ptr_dst[i] = '\0';
	return (ptr_dst);
}
