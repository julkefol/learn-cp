#include <stdio.h>
#include <stdlib.h>
#include "dLinked-list.h"

int main()
{
    Node *n1, *head;

    n1 = create_node(10, NULL, NULL);
    head = n1;
    print_linked_list(head);

    head = append(20, head);
    print_linked_list(head);

    head = prepend(5, head);
    print_linked_list(head);

    insert_node(15, head->next);
    print_linked_list(head);

    head = remove_node(head, head->next->next);
    print_linked_list(head);
    
	return 0;
}

