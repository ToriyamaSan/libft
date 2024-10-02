/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <dle-fur@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:49:32 by dle-fur           #+#    #+#             */
/*   Updated: 2024/10/01 15:00:41 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr_s1;
	char	*ptr_s2;
	size_t	i;

	ptr_s1 = (char *)s1;
	ptr_s2 = (char *)s2;
	i = 0;
	while ((ptr_s1[i] != '\0' || ptr_s2[i] != '\0') && i < n)
	{
		if (ptr_s1[i] > ptr_s2[i])
		{
			return (1);
		}
		else if (ptr_s1[i] < ptr_s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
