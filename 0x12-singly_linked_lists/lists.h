#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include<string.h>

/**
 * struct node - Describes node of a linked list.
 * @str: string
 * @len: length of string
 * @next: pointer to next node
 */

struct node
{
	char *string;
	int len;
	struct node *next;
};

typedef struct node list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen(char *s);
int _putchar (char c);
#endif /* MAIN_H */
