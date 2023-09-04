#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.\nPrototype: char *_strdup(char *str);\nThe _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.\nReturns NULL if str = NULL\nOn success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available\nFYI: The standard library provides a similar function: strdup. Run man strdup to learn more.");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
