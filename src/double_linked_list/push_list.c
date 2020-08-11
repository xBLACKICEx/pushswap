/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** push_list
*/

#include <linked_list.h>

void push_back(dlist_t **dlist, int num)
{
    node_t *new_elemnt = malloc(sizeof(node_t));
    new_elemnt->prev = NULL;
    new_elemnt->next = NULL;
    new_elemnt->num = num;
    if (is_empty_dlist(*dlist) == true) {
        (*dlist) = malloc(sizeof(dlist_t));
        (*dlist)->end_a = new_elemnt;
        (*dlist)->begin_a = new_elemnt;
        (*dlist)->len_a = 0;
    } else {
        new_elemnt->prev = (*dlist)->end_a;
        (*dlist)->end_a->next = new_elemnt;
        (*dlist)->end_a = new_elemnt;
    }
    (*dlist)->len_a += 1;
}

void push_front(dlist_t **dlist, int num)
{
    node_t *new_elemnt = malloc(sizeof(node_t));
    new_elemnt->prev = NULL;
    new_elemnt->next = NULL;
    new_elemnt->num = num;

    if (is_empty_dlist(*dlist) == true) {
        *dlist = malloc(sizeof(dlist_t));
        (*dlist)->begin_a = new_elemnt;
        (*dlist)->end_a = new_elemnt;
        (*dlist)->len_a = 0;
    } else {
        new_elemnt->next = (*dlist)->begin_a;
        (*dlist)->begin_a->prev = new_elemnt;
        (*dlist)->begin_a = new_elemnt;
    }
    (*dlist)->len_a += 1;
}