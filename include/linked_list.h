/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** linked_list
*/

#ifndef linked_list_H_
#define linked_list_H_

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>

typedef struct node_s node_t;
struct node_s
{
    int num;
    node_t  *prev;
    node_t  *next;
};

typedef struct dlist_s dlist_t;
struct dlist_s
{
    node_t *begin_a;
    node_t *end_a;
    node_t *begin_b;
    node_t *end_b;
    char *str;
    unsigned n;
    unsigned int len_a;
    unsigned int len_b;
};

void pb_l(dlist_t **dlist);
void pa_l(dlist_t **dlist);
void ra_l(dlist_t **dlist, int num);
void rra_l(dlist_t **dlist, int num);

int dlist_length(dlist_t *cout_tota_list);
void print_dlist_a(dlist_t *list);
void print_dlist_b(dlist_t *list);
void print_dlist_a_p(dlist_t *list);
void print_dlist_b_p(dlist_t *list);
bool is_empty_dlist(dlist_t * ccheak_list_is_null);
void push_back(dlist_t **dlist, int num);
void push_front(dlist_t **dlist, int num);
void clear_dlist(dlist_t **dlist);
void pop_front(dlist_t **dlist);
void pop_back(dlist_t **dlist);

#endif