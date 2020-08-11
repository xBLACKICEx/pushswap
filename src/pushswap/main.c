/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** main
*/

#include <linked_list.h>
#include <pushswap.h>

int main(int argc, char *argv[])
{
    dlist_t *list = NULL;

    if (argc == 1) return (84);
    for (int i = 1; i < argc; i++)
        push_back(&list, my_getnbr(argv[i]));
    list->begin_a->prev = list->end_a;
    list->end_a->next = list->begin_a;
    list->begin_b = NULL;
    list->end_b = NULL;
    list->len_b = 0;
    list->n = 0;
    if (list->len_a > 1000)
        list->str = malloc(sizeof(char) * list->len_a * 5 *
        list->len_a / 10 - 150);
    else
        list->str = malloc(sizeof(char) * list->len_a * 5 * list->len_a);
    chek_list(&list);
    clear_dlist(&list);
    return (0);
}