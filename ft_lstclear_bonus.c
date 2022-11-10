/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollado <lcollado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:26:46 by lcollado          #+#    #+#             */
/*   Updated: 2022/11/07 18:27:58 by lcollado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *tmp;
    if (*lst && del)
    {
        while (*lst)
        {
            tmp = (*lst) -> next;
            ft_lstdelone(*lst, del);
            (*lst) = tmp;
        }
        free(*lst);
    }
   
}