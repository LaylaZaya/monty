#include "monty.h"
/**
 * f_pstr - Prints the string starting at the top of the stack,
 * FOLLOWED BY A NEW
 * @head: STACK HEAD
 * @counter: LINE_NUMBER
 * return: NO RETURN
*/
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
while (h)
{
if (h->n > 127 || h->n <= 0)
{
break;
}
printf("%c", h->n);
h = h->next;
}
printf("\n");
}
