#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 * @n: number of element of array
 * Return: n
 */
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'r')
n[i] = n[i] - 32;
i++;
}
return (n);
}
