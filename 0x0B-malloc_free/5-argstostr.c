#include "holberton.h"
#include <stdlib.h>
/**
 *_strlen - check code
 *@s: letter
 *Return: value
 */
int _strlen(char *s)
{
	int size = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 *argstostr - check code
 *@ac: letter
 *@av: letter
 *Return: value
 */
char *argstostr(int ac, char **av)
{
	int i, tmp, a, j = 0;
	char *tab;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (a < ac)
	{
		tmp += _strlen(av[a]) + 1;
		a++;
	}
	tmp++;
	tab = malloc(sizeof(char) * tmp);
	if (tab == NULL)
	{
		return (NULL);
	}

	a = 0;

	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			tab[a++] = av[i][j++];
		}
		tab[a++] = '\n';
		i++;
	}
	tab[a] = '\0';
	return (tab);
}
