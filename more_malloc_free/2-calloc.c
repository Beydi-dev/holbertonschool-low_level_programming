#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array 
 * @nmemb: elements of the array
 * @size: Size of the array
 * Return: void*
 */

 void *_calloc(unsigned int nmemb, unsigned int size)
 {
    char *ptr;
    int i;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }
    ptr = malloc(nmemb * size);

    if (ptr == NULL)
    {
        exit(1);
    }
    for (i = 0; i < nmemb * size; i++)
    {
        ptr[i] = 0;
    }
    return (ptr);
}