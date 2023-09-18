#include <stdio.h>
#include <stdlib.h>
#include "sLinked-list.h"

int count(Node *head)
{
    int num = 0;
    Node *current_node = head;

    while (current_node != NULL) {
        num++;
        current_node = current_node->next;
    }
    
     return num;
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

    printf("len = %d\n", count(head));

	return 0;
}

