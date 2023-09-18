#include <stdio.h>
#include <stdlib.h>
#include "sLinked-list.h"

Node *search(Node *head, int item)
{
    Node *current_node = head;

    while (current_node->data != item) {
        current_node = current_node->next;
    }
    
     return current_node;
}

int main()
{
    Node *n1 = NULL, *head = NULL;

    n1 = create_node(10, NULL);
    head = n1;
    print_linked_list(head);

    head = prepend(head, 20);
    print_linked_list(head);

    head = append(head, 30);
    print_linked_list(head);

    Node *n2 = search(head, 30);
    printf("%p\n", n2->next); // should be nil

	return 0;
}

