typedef struct node Node;

struct node {
    int data;
    Node *left;
    Node *right;
};

Node * create_Node(int item) {
    Node *new_Node = (Node *) malloc(sizeof(Node));
    if (new_Node == NULL) {
        puts("Error! Could Not Create A New Node.");
        exit(1);
    }

    new_Node->data = item;
    new_Node->left = NULL;
    new_Node->right = NULL;
    
    return new_Node;
}

void add_left_child(Node *node, Node *child)
{
    node->left = child;
}

void add_right_child(Node *node, Node *child)
{
    node->right = child;
}
