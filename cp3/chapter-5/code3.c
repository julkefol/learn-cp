#include <stdio.h>

#define Q_SIZE 5

typedef struct {
    int head, tail;
    int data[Q_SIZE + 1];
} Queue;

void enQueue(Queue *q, int item)
{
    // modulus operation is used so that the array index doesn't overflow
    // e.g., 5+1 === 6, but index 6 doesn't exist.
    if ((q->tail+1) % (Q_SIZE+1) == q->head) {
        puts("Queue is full");
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail+1) % (Q_SIZE+1);
}

int deQueue(Queue *q)
{
    int item;

    if (q->tail == q->head) {
        puts("Queue is empty");
        return -1;
    }

    item = q->data[q->head];
    q->head = (q->head+1) % (Q_SIZE+1);

    return item;
}

int main()
{
    Queue my_q;
    int item;

    my_q.head = 0;
    my_q.tail = 0;

    enQueue(&my_q, 1);
    printf("tail = %d\n", my_q.tail);
    enQueue(&my_q, 2);
    printf("tail = %d\n", my_q.tail);
    enQueue(&my_q, 3);
    printf("tail = %d\n", my_q.tail);
    enQueue(&my_q, 4);
    printf("tail = %d\n", my_q.tail);
    enQueue(&my_q, 5);
    printf("tail = %d\n", my_q.tail);
    enQueue(&my_q, 6);
    printf("tail = %d\n", my_q.tail);

    printf("beginning head = %d\n", my_q.head);
    item = deQueue(&my_q);
    printf("beginning head = %d\n", my_q.head);
    item = deQueue(&my_q);
    printf("beginning head = %d\n", my_q.head);
    item = deQueue(&my_q);
    printf("beginning head = %d\n", my_q.head);
    item = deQueue(&my_q);
    printf("beginning head = %d\n", my_q.head);
    item = deQueue(&my_q);
    printf("beginning head = %d\n", my_q.head);
    item = deQueue(&my_q);

	return 0;
}

