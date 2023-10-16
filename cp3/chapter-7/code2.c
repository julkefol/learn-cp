
#include <stdio.h>
#include <stdlib.h>
#include "bin-tree.h"
#include "btTraverse.h"

/*
 *              _2_
 *             /   \
 *            7     9
 *           / \     \
 *          1   6     8
 *             / \   / \
 *            5  10 3   4
 *
 * */

Node *create_tree()
{
    Node *two = create_Node(2);
    Node *seven = create_Node(7);
    Node *nine = create_Node(9);
    add_left_child(two, seven);
    add_right_child(two, nine);

    Node *one = create_Node(1);
    Node *six = create_Node(6);
    add_left_child(seven, one);
    add_right_child(seven, six);

    Node *five = create_Node(5);
    Node *ten = create_Node(10);
    add_left_child(six, five);
    add_right_child(six, ten);
    
    Node *eight = create_Node(8);
    add_left_child(nine, eight);

    Node *three = create_Node(3);
    Node *four = create_Node(4);

    add_left_child(eight, three);
    add_right_child(eight, four);

    return two;
}

int main()
{
    Node *root = create_tree();
    printf("%d\n", root->data);

    pre_order(root);
    printf("\n");
    post_order(root);
    printf("\n");
    in_order(root);

    return 0;
}
