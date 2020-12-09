void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last_element;

    if (!lst || !new)
        return (NULL);
    last_element = ft_lstlast(*lst);
    last_element->next = new;
}
