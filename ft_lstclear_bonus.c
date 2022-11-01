#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (lst == NULL)
        return ;
    while (lst)
    {
        ft_lstdelone(*lst, del);
        lst = lst -> next;
    }
}