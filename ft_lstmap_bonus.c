#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
    t_list  *lst_new;
    t_list  *nodo;

    lst_new = 0;
    if (lst)
    {
        while (lst)
        {
            nodo = (*f)(lst->content);
            if (nodo == NULL)
            {
                ft_lstclear(nodo->content, del);
                return (NULL);
            }
            ft_lstadd_back(&lst_new, nodo);    
        }
    }
    return (lst_new);
} 