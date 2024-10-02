/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <dle-fur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:05:21 by dle-fur           #+#    #+#             */
/*   Updated: 2024/10/02 10:43:37 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*ptr_dest;
	char	*ptr_src;
	size_t	i;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	i = 0;
	if (ptr_dest == NULL || ptr_src == NULL)
		return (NULL);
	if (ptr_dest < ptr_src)
	{
		while (i < len)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	else
	{
		while (0 < len--)
			ptr_dest[len] = ptr_src[len];
	}
	return (ptr_dest);
}
