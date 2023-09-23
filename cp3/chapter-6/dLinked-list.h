typedef struct node Node;

struct node {
    int data;
    Node *prev;
    Node *next;
};

Node *create_node(int item, Node *prev, Node *next)
{
    Node *new_Node = (Node *) malloc(sizeof(Node));
    if (new_Node == NULL) {
        printf("Error! Couldn't Create A New Node\n");
        exit(1);
    }

    new_Node->data = item;
    new_Node->prev = prev;
    new_Node->next = next;

    return new_Node;
}

Node *prepend(int item, Node *head)
{
    Node *new_Node = create_node(item, NULL, head);
    new_Node->next->prev = new_Node;
    return new_Node; // new_Node will be assinged to head in main
}

Node *append(int item, Node *head)
{
    Node *new_Node = create_node(item, NULL, NULL);
    if (head == NULL)
        return new_Node;

    Node *current_Node = head;
    while(current_Node->next != NULL)
        current_Node = current_Node->next;

    current_Node->next = new_Node;
    new_Node->prev = current_Node;

    return head;
}

Node *remove_node(Node *head, Node *node)
{
    if (node == head) {
        head = node->next;
        head->prev = NULL;
        free(node);
        return head;
    }

    Node *prev_Node = node->prev;
    Node *next_Node = node->next;

    prev_Node->next = next_Node;
    next_Node->prev = prev_Node;
    
    return head;
}

void insert_node(int item, Node *node)
{
    Node *new_Node = create_node(item, node, node->next);
    node->next->prev = new_Node;
    node->next = new_Node;
}

void print_linked_list(Node *head)
{
    Node *current_Node = head;
    while (current_Node != NULL) {
        printf("%d ", current_Node->data);
        current_Node = current_Node->next;
    }

    printf("\n");
}
