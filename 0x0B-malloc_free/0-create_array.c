#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of specified size
 * @size : integer size
 * @c : character to initialize the array
 *
 * Return: myarray an array of characters
 */

char *create_array(unsigned int size, char c)
{
char *myarray;
unsigned int i;

if(size == 0)
{
return (NULL);
}else{
myarray = malloc(size);

for (i = 0; i < size; i++)
{

myarray[i] = c;

}

return (myarray);

}


}
