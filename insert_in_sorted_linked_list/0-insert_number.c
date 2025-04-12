#include "lists.h"
#include <stdlib.h>
/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to the head of the list
 * @number: number to insert
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *copia, *prev;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	//Armar el nuevo nodo
	
	new_node->n = number;
	new_node->next = NULL;

	//insertar en la nueva lista
	
	if (*head == NULL || (*head)->n >= number)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	copia = *head;
	prev = NULL;

	//Recorrer la lista
	
	while (copia != NULL && copia->n < number)
	{
		prev = copia;
		copia = copia->next;
	}

	prev->next = new_node;
	new_node->next = copia;
	return (new_node);
}
