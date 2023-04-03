#include<stdio.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
