typedef struct node Node;

struct node {
    int data;
    Node *parent;
    Node *left;
    Node *right;
};

Node *create_node(int item)
{
    Node *new_node = (Node *) malloc(sizeof(Node));
    if (new_node == NULL) {
        puts("Error! Could not create a new node.");
        exit(1);
    }

    new_node->data = item;
    new_node->parent = NULL;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

void add_left_child(Node *node, Node *child)
{
    node->left = child;

    if (child != NULL)
        child->parent = node;
}

void add_right_child(Node *node, Node *child)
{
    node->right = child;

    if (child != NULL)
        child->parent = node;
}

Node *bst_insert(Node *root, Node *node)
{
    if (root == NULL) {
        root = node;
        return root;
    }

    Node *parent_node = NULL, *current_node = root;

    while (current_node != NULL) {
        parent_node = current_node;

        if (node->data < current_node->data)
            current_node = current_node->left;
        else current_node = current_node->right;
    }

    if (node->data < parent_node->data)
        add_left_child(parent_node, node);
    else add_right_child(parent_node, node);

    return root;
}

Node *bst_search(Node *root, int item)
{
    Node *node = root;

    while (node != NULL) {
        if (node->data == item)
            return node;
        
        if (item < node->data)
            node = node->left;
        else node = node->right;
    }

    return node;
}
