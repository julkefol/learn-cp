Node *reverse_sLlist(Node *head)
{
    if (head == NULL)
        return head;

    Node *prev = head;
    Node *Next = head->next;
    head->next = NULL;
    Node *mid = NULL;

    while (Next != NULL) {
        mid = Next->next;
        Next->next = prev;
        prev = Next;
        Next = mid;
    }

    return prev;
}
