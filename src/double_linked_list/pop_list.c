/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pop_list
*/

#include <linked_list.h>

void pop_front(dlist_t **dlist)
{
    node_t *tmp;
    if (is_empty_dlist(*dlist) == true)
        return;
    if ((*dlist)->len_a == 1) {
        free((*dlist)->begin_a);
        free((*dlist));
        (*dlist) = NULL;
        return;
    } else {
        tmp = (*dlist)->begin_a;
        (*dlist)->begin_a = (*dlist)->begin_a->next;
        (*dlist)->begin_a->prev = NULL;
        free(tmp);
        (*dlist)->len_a -= 1;
        return;
    }
}

void pop_back(dlist_t **dlist)
{
    node_t *tmp;
    if (is_empty_dlist(*dlist) == true)
        return;
    if ((*dlist)->len_a == 1) {
        free((*dlist)->end_a);
        free((*dlist));
        (*dlist) = NULL;
        return;
    } else {
        tmp = (*dlist)->end_a;
        (*dlist)->end_a = (*dlist)->end_a->prev;
        (*dlist)->end_a->next = NULL;
        free(tmp);
    }
    (*dlist)->len_a -= 1;
}