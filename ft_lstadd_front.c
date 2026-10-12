/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 21:36:16 by user              #+#    #+#             */
/*   Updated: 2026/10/11 23:00:20 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list	*head;
	t_list	*new_node1;
	t_list	*new_node2;
		
	head = NULL;
	new_node1 = ft_lstnew("Node 1");
	new_node2 = ft_lstnew("Node 2");
	ft_lstadd_front(&head, new_node1);
	ft_lstadd_front(&head, new_node2);
	t_list	*current;
	current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	free(new_node1);
	free(new_node2);
	return (0);
}
*/
