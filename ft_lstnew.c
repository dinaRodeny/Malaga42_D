/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:28:36 by user              #+#    #+#             */
/*   Updated: 2026/10/08 21:35:37 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list* new_node;
    new_node=malloc(sizeof(t_list)*1);
    if(!new_node)
        return(NULL);
    new_node->content=content;
    new_node->next=NULL;
    return(new_node);
}