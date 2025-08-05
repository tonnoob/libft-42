/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osousa-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:18:50 by osousa-d          #+#    #+#             */
/*   Updated: 2025/07/30 16:18:51 by osousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	len_n (long long n)
{
	int	i;

	i = 0;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}	

char	*ft_itoa(int n)
{
	long long	nb;
	char	*str;
	int		len;

	nb = n;
	len = len_n(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (len--)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
