void pre_order(Node *node)
{
    printf("%d ", node->data);

    if (node->left != NULL)
        pre_order(node->left);
    if (node->right)
        pre_order(node->right);
}

void post_order(Node *node)
{
    if (node->left)
        post_order(node->left);
    if (node->right)
        post_order(node->right);

    printf("%d ", node->data);
}

void in_order(Node *node)
{
    if (node->left)
        in_order(node->left);

    printf("%d ", node->data);

    if (node->right)
        in_order(node->right);
}
