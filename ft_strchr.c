/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikim <shikim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:43:57 by shikim            #+#    #+#             */
/*   Updated: 2023/04/03 13:29:03 by shikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*temp_s;
	char	temp_c;

	temp_s = (char *)s;
	index = ft_strlen(temp_s) + 1;
	temp_c = (char) c;
	while (index-- > 0)
	{
		if (*temp_s == temp_c)
			return (temp_s);
		temp_s++;
	}
	return (0);
}
