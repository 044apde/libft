/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikim <shikim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:36:04 by shikim            #+#    #+#             */
/*   Updated: 2023/03/22 17:12:19 by shikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*temp_s1;
	char	*temp_s2;
	int		compared_value;

	temp_s1 = (char *)s1;
	temp_s2 = (char *)s2;
	if (temp_s1 == 0 && temp_s2 == 0)
		return (0);
	while (n-- > 0)
	{
		compared_value = (unsigned char)*temp_s1 - (unsigned char)*temp_s2;
		if (compared_value != 0)
			return (compared_value);
		temp_s1++;
		temp_s2++;
	}
	return (0);
}
