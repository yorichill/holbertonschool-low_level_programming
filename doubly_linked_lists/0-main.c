#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    
    sum = sum_dlistint(head);
    printf("Sum of nodes: %d\n", sum);

    insert_dnodeint_at_index(&head, 5, 42);
    printf("List after insertion at index 5:\n");
    print_dlistint(head);

    delete_dnodeint_at_index(&head, 0);
    delete_dnodeint_at_index(&head, 7); /* An index in the middle */
    printf("List after deletion at index 0 and 7:\n");
    print_dlistint(head);

    free_dlistint(head);
    head = NULL;

    return (EXIT_SUCCESS);
}