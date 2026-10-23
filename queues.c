#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int customerNumber;
    struct Node *next;
} Node;

typedef struct Queue {
    Node *front;
    Node *rear;
} Queue;


void initQueue(Queue *q) {
    q->front = NULL;
    q->rear = NULL;
}


int isEmpty(Queue *q) {
    return q->front == NULL;
}


void enqueue(Queue *q, int number) {
    Node *p = (Node *)malloc(sizeof(Node));

    if (p == NULL)
        return;

    p->customerNumber = number;
    p->next = NULL;

    if (isEmpty(q)) {
        q->front = p;
        q->rear = p;
    }
    else {
        q->rear->next = p;
        q->rear = p;
    }
}


int dequeue(Queue *q) {
    Node *p;
    int number;

    if (isEmpty(q))
        return -1;

    p = q->front;
    number = p->customerNumber;
    q->front = p->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(p);

    return number;
}


int peek(Queue *q) {
    if (isEmpty(q))
        return -1;

    return q->front->customerNumber;
}typedef struct Node {
    int customerNumber;
    struct Node *next;
} Node;

typedef struct Queue {
    Node *front;
    Node *rear;
} Queue;

/* 1. Initialize the queue */
void initQueue(Queue *q) {
    q->front = NULL;
    q->rear = NULL;
}

/* 2. Check if the queue is empty */
int isEmpty(Queue *q) {
    return q->front == NULL;
}

/* 3. Enqueue: add a customer */
void enqueue(Queue *q, int number) {
    Node *p = (Node *)malloc(sizeof(Node));

    if (p == NULL)
        return;

    p->customerNumber = number;
    p->next = NULL;

    if (isEmpty(q)) {
        q->front = p;
        q->rear = p;
    }
    else {
        q->rear->next = p;
        q->rear = p;
    }
}


int dequeue(Queue *q) {
    Node *p;
    int number;

    if (isEmpty(q))
        return -1;

    p = q->front;
    number = p->customerNumber;
    q->front = p->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(p);

    return number;
}


int peek(Queue *q) {
    if (isEmpty(q))
        return -1;

    return q->front->customerNumber;
}
