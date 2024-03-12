#include "lists.h"

/**
 * check_cycle
 * list - linked list
 *
 * return 0 if cycle or 1 if not
 */

int ckeck_cycle(listint_t *list)
{
	listint_t *tortoise, *hare
	
	tortoise = list;
	hare = list;

	while(tortoise && hare)
	{
		if(hare->next == NULL)
			return(0);
		tortoise = tortoise->next;
		hare = hare->next->next;
		if(tortoise == hare)
			retrun(1);
	}

	retrun(0);
}
