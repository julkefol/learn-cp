#include <stdio.h>
#include <stdlib.h>
#include "sLinked-list.h"

int main()
{
    Node *n1, *head, *n2;
    
    n1 = create_node(10, NULL);
    head = n1;
    print_linked_list(head);

    head = prepend(head, 50);
    print_linked_list(head);

    head = append(head, 30);
    print_linked_list(head);

    n2 = head->next;
    insert_node(n2, 300);
    print_linked_list(head);
    
    head = remove_node(head, n1);
    print_linked_list(head);

    n2 = head;
    head = remove_node(head, n2);
    print_linked_list(head);

    n2 = head;
    head = remove_node(head, n2);
    print_linked_list(head);

    n2 = head;
    head = append(head, 50);
    print_linked_list(head);

    n2 = head;
    insert_node(n2, 40);
    print_linked_list(head);

	return 0;
}

