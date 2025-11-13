#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    char *arr;
    unsigned int i;

    arr = create_array(5, 'X');
    if (arr == NULL)
    {
        printf("Erreur d'allocation\n");
        return 1;
    }

    for (i = 0; i < 5; i++)
        putchar(arr[i]);
    putchar('\n');

    free(arr);
    return 0;
}
