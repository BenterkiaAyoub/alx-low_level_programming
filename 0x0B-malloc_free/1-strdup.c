#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *m;
	int i = 0, s = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	m = malloc(sizeof(char) * (i + 1));

	if (m == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		m[s] = str[s];

	return (m);
}

