/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pushswap
*/

#include <linked_list.h>

int digital_comparison(dlist_t **dlist, int *num, int *pos, int *state)
{
    *num = (*dlist)->begin_a->num, *pos = 1, *state = 0;
    node_t *tmp = (*dlist)->begin_a;

    for (int ji = 1; ji < (*dlist)->len_a; ji++, tmp = tmp->next)
        if (tmp->num > tmp->next->num) {
            *state = 1;
            if (tmp->next->num < *num) {
                *num = tmp->next->num;
                *pos = ji + 1;
            }
        }
}

void chek_list(dlist_t **dlist)
{
    int num, pos, state = 1;

    for (; state != 0;) {
        digital_comparison(dlist,  &num, &pos, &state);
        if (state == 1) {
            if ((*dlist)->len_a % 2 == 1 && (*dlist)->len_a / 2 + 1 == pos)
                ra_l(dlist, pos - 1);
            else if ((*dlist)->len_a / 2 < pos)
                rra_l(dlist, (*dlist)->len_a - pos + 1);
            else
                ra_l(dlist, pos - 1);
            pb_l(dlist);
        }
    }
    for (int i = (*dlist)->len_b; i > 0; i--)
        pa_l(dlist);
    if ((*dlist)->n != 0)
        write (1, (*dlist)->str, (*dlist)->n - 1);
    write (1, "\n", 1);
}