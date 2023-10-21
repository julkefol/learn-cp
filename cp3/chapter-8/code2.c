#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

Node *create_bst()
{
    Node *root, *node;

    int i;
    int ara[] = {5, 17, 3, 7, 12, 19, 1, 4};

    root = create_node(10);

    for (i = 0; i < 8; i++) {
        node = create_node(ara[i]);
        root = bst_insert(root, node);
    }

    return root;
}

int main()
{
    Node *root = create_bst();
    Node *node = NULL;

    node = bst_search(root, 7);

    if (node) // not equal to
        printf("%d\n", node->data);
    else puts("Node not found!");

    node = bst_search(root, 8);

    if (node) // not equal to
        printf("%d\n", node->data);
    else puts("Node not found!");

	return 0;
}

