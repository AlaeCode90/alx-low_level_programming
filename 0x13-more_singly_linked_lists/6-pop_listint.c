/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n).
 * @head: The head/first node of the list
 *
 * Return: The data of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (*head == NULL)
	return (0);

temp = *head;
*head = (*head)->next;
data = temp->n;
free(temp);

return (data);
}

