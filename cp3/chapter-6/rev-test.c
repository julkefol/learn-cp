#include <stdio.h>
#include <stdlib.h>
#include "sLinked-list.h"
#include "rev-sLlist.h"

int main()
{
    Node *head = create_node(5, NULL);
    print_linked_list(head);

    insert_node(head, 10);
    print_linked_list(head);

    head = append(head, 15);
    print_linked_list(head);

    head = prepend(head, 0);
    print_linked_list(head);

    head = reverse_sLlist(head);
    print_linked_list(head);


	return 0;
}

