#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct node - Describes node of a linked list.
 * @str: string
 * @len: length of string
 * @next: pointer to next node
 */

struct node
{
	char *str;
	int len;
	struct node *next;
};

typedef struct node list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* MAIN_H */
