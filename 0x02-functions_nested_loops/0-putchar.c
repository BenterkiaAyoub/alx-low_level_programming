#include <stdio.h>

/**
 * main - enter point
 *
 * Descreption: print _putchar
 *
 * return 0 (success)
*/

int main(void)
{
char word[] = "_putchar";
for (int i = 0; word[i] != '\0' ; i++)
putchar(word[i]);
putchar('\n');
return (0);
}
