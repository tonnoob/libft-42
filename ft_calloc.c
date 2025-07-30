/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osousa-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:47:49 by osousa-d          #+#    #+#             */
/*   Updated: 2025/07/28 19:47:50 by osousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*p;
	void			*ptr;

	if (count == 0 || size == 0)
		return	(malloc(0));
	ptr = malloc( count * size);
	p = (unsigned char *)ptr;
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
