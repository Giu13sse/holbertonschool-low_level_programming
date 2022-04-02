#include "lists.h"
/**
 * print_listint_safe - prints list, avoids loop
 * @head: points to start of list
 * Return: number of nodes in size_t or exit 98
 */
size_t print_listint_safe(const listint_t *head)
{
size_t pic = 0;
const listint_t *aux_node = head;

if (!head)
exit(98);

while (aux_node)
{
printf("[%p] %i\n", (void *)aux_node, aux_node->n);
aux_node = aux_node->next;
pic++;
}
return (pic);
}
