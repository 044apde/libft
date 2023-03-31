/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shikim <shikim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:19:12 by shikim            #+#    #+#             */
/*   Updated: 2023/03/31 16:55:57 by shikim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_memory;

	allocated_memory = (void *)malloc(count * size);
	if (allocated_memory == 0)
		return (0);
	ft_bzero(allocated_memory, count * size);
	return (allocated_memory);
}
