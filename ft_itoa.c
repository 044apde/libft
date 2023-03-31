/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikim <shikim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:48:22 by shikim            #+#    #+#             */
/*   Updated: 2023/03/31 23:29:55 by shikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int check_size(int n)
{
	int			size;
	long long	num;

	size = 0;
	if (n < 0)
	{
		++size;
		num = (long long)n * -1;
	}
	else
		num = (long long)n;
	while (num > 0)
	{
		++size;
		num /= 10;
	}
	return (size);
}

char *ft_itoa(int n)
{
	char 		*dst;
	int 		dst_size;
	long long	num;

	dst_size = check_size(n);
	dst = (char *)malloc(dst_size + 1);
	dst[dst_size] = '\0';
	if (n >= 0)
	{
		while (dst_size-- > 0)
		{
			dst[dst_size] = (num % 10) + 48;
			num = num / 10;
		}
	}
	else
	{
		while (dst_size-- > 1)
		{
			dst[dst_size] = (num % 10) + 48;
			num = num / 10;
		}
		dst[0] = '-';
	}
	return (dst);
}