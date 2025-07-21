/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osousa-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:09:33 by osousa-d          #+#    #+#             */
/*   Updated: 2025/07/21 19:09:38 by osousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_2;
	unsigned char	*dest_2;

	dest_2 = (unsigned char *)dest;
	src_2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_2[i] = src_2[i];
		i++;
	}
	return (dest);
}
