#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *struct element_t - type struct
 *@str: string
 *@len: length
 *@next: point on next element
 */
typedef struct element_t
{
	char *str;
	unsigned int len;
	struct element_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
unsigned int _strlen(const char *s);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
