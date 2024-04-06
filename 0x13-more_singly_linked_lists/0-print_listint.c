#include "lists.h"

size_t print_listint(const listint_t *h)
{
    int count = 0;
    const listint_t *ptr = h;

    ptr = h;
    while(ptr)
    {
        printf("%d\n", ptr->n);
        count++;
        ptr = ptr->next;
    }
    return count;
}