#include "main.h"
#include <stdlib.h>

/**
 * creat_array - creats an array of size size and assign char c
 * @size: The size of the array
 * @c: The char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char c;

str = malloc(sizeof(char) * size);
if (size == 0 || c == NULL)
return (NULL);

for (i = 0; i < size; i++)
c[i] = 0;
return (c);
}
