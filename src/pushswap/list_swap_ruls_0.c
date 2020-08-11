/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** list_swap_ruls_0
*/

#include <linked_list.h>
#include <pushswap.h>

void ra_l(dlist_t **dlist, int num)
{
    for (int i = 0; i < num; i++, (*dlist)->begin_a =
        (*dlist)->begin_a->next) {
        (*dlist)->str[(*dlist)->n] = 'r';
        (*dlist)->str[(*dlist)->n + 1] = 'a';
        (*dlist)->str[(*dlist)->n + 2] = ' ';
        (*dlist)->n += 3;
    }
    (*dlist)->end_a = (*dlist)->begin_a->prev;
}

void rra_l(dlist_t **dlist, int num)
{
    for (int i = 0; i < num; i++, (*dlist)->begin_a =
        (*dlist)->begin_a->prev) {
        (*dlist)->str[(*dlist)->n] = 'r';
        (*dlist)->str[(*dlist)->n + 1] = 'r';
        (*dlist)->str[(*dlist)->n + 2] = 'a';
        (*dlist)->str[(*dlist)->n + 3] = ' ';
        (*dlist)->n += 4;
    }
    (*dlist)->end_a = (*dlist)->begin_a->prev;
}

void pa_l2(dlist_t **dlist)
{
    if ((*dlist)->begin_a == NULL) {
        (*dlist)->begin_a = (*dlist)->begin_b;
        (*dlist)->begin_a->next = (*dlist)->begin_a;
        (*dlist)->begin_a->prev = (*dlist)->begin_a;
        (*dlist)->end_a = (*dlist)->begin_a;
        (*dlist)->len_a = 1u;
    } else {
        (*dlist)->begin_b->next = (*dlist)->begin_a;
        (*dlist)->begin_a->prev = (*dlist)->begin_b;
        (*dlist)->begin_a = (*dlist)->begin_b;
        (*dlist)->begin_a->prev =  (*dlist)->end_a;
        (*dlist)->end_a->next =  (*dlist)->begin_a;
        (*dlist)->len_a += 1u;
    }
}

void pa_l(dlist_t **dlist)
{
    if (!is_empty_dlist((*dlist)) && (*dlist)->begin_b != NULL) {
        node_t *tmp = (*dlist)->begin_b->next;
        pa_l2(dlist);
        (*dlist)->begin_b = tmp;
        if ((*dlist)->begin_b != NULL)
            (*dlist)->begin_b->prev = NULL;
        (*dlist)->len_b -= 1u;
        (*dlist)->str[(*dlist)->n] = 'p';
        (*dlist)->str[(*dlist)->n + 1] = 'a';
        (*dlist)->str[(*dlist)->n + 2] = ' ';
        (*dlist)->n += 3;
    }
}
