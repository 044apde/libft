/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 04:18:16 by marvin            #+#    #+#             */
/*   Updated: 2023/04/02 04:18:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == 0)
		return ;
	while (*lst != 0)
	{
		tmp = (*lst)->next; // 포인터 * 역참조보다 '->' 가 우선순위가 높다.
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = 0;
}
