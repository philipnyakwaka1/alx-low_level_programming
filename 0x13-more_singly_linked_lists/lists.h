#ifndef LISTS_H
#define LISTS_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);

#endif