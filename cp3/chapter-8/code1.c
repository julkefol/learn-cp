#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
#include "../chapter-7/btTraverse.h"

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

    // in-order algorithm is to traverse bst from small to large
    in_order(root);
    printf("\n");

	return 0;
}

