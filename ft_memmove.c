/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osousa-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:25:18 by osousa-d          #+#    #+#             */
/*   Updated: 2025/07/21 19:25:20 by osousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_2;
	unsigned char	*dest_2;

	src_2 = (unsigned char *)src;
	dest_2 = (unsigned char *)dest;
	i = n;
	if (dest_2 > src_2)
	{
		while (i > 0)
		{
			i--;
			dest_2[i] = src_2[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_2[i] = src_2[i];
			i++;
		}
	}
	return (dest);
}
