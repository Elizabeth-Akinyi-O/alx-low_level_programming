#ifndef _SINGLY_LL_HEADER_
#define _SINGLY_LL_HEADER_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *struct list_s - singly linked list
 *@str: string
 *@len: length of the string
 *@next: pointer to the next node
 */

typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int len(const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
