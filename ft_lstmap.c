/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2NULL23/NULL4/NULL2 16:56:35 by marvin            #+#    #+#             */
/*   Updated: 2NULL23/NULL4/NULL2 16:56:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*temp_content;

	new_list = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		temp_content = lst->content;
		new_node = ft_lstnew(f(temp_content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (new_list == NULL)
			new_list = new_node;
		else
			ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
