/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** is_empty_list
*/

#include <linked_list.h>

void clear_dlist(dlist_t **dlist)
{
    node_t *tmp;
    if (is_empty_dlist(*dlist))
        return;
    for (; (*dlist)->len_a != 0;) {
        tmp = ((*dlist)->begin_a);
        (*dlist)->begin_a = (*dlist)->begin_a->next;
        free(tmp);
        (*dlist)->len_a -= 1;
    }
    free((*dlist)->str);
    free((*dlist));
}

bool is_empty_dlist(dlist_t * ccheak_list_is_null)
{
    if (ccheak_list_is_null == NULL)
        return (true);
    else
        return (false);
}