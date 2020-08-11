/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** list_swap_ruls_1
*/

#include <linked_list.h>
#include <pushswap.h>

void pb_l2(dlist_t **dlist)
{
    if ((*dlist)->begin_b == NULL) {
        (*dlist)->begin_b = (*dlist)->begin_a;
        (*dlist)->begin_b->next = NULL;
        (*dlist)->begin_b->prev = NULL;
        (*dlist)->end_b = (*dlist)->begin_b;
        (*dlist)->len_b = 1u;
    } else {
        (*dlist)->begin_a->next = (*dlist)->begin_b;
        (*dlist)->begin_b->prev = (*dlist)->begin_a;
        (*dlist)->begin_b = (*dlist)->begin_a;
        (*dlist)->begin_b->prev = NULL;
        (*dlist)->len_b += 1u;
    }
}

void pb_l(dlist_t **dlist)
{
    if (!is_empty_dlist((*dlist)) && (*dlist)->begin_a != NULL) {
        node_t *tmp = (*dlist)->begin_a->next;
        pb_l2(dlist);
        if ((*dlist)->len_a == 1u)
            (*dlist)->begin_a = NULL;
        else {
            (*dlist)->begin_a = tmp;
            (*dlist)->begin_a->prev = (*dlist)->end_a;
            (*dlist)->end_a->next = (*dlist)->begin_a;
        }
        (*dlist)->len_a -= 1u;
        (*dlist)->str[(*dlist)->n] = 'p';
        (*dlist)->str[(*dlist)->n + 1] = 'b';
        (*dlist)->str[(*dlist)->n + 2] = ' ';
        (*dlist)->n += 3;
    }
}