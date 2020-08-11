/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pushswap
*/

#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_
#include <linked_list.h>

int smolles(int num1, int num2, int num3);
char check_list_B(int first, int second, int last);
char check_list_A(int first, int second, int last);
char check_list_B_s(int first, int second, int last);
void chek_list(dlist_t **dlist);
int my_getnbr(char const *str);
void pushswap(dlist_t *dlist);
int my_strlen(char const *str);
char *my_strncdup(char *dest, char const *str, int n);
#define IS_NUMABS(c) ((c >= '0' && c <= '9') || c == '-' || c == '+')
#define IS_NUM(c) (c >= '1' && c <= '9')

#endif