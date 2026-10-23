#include <stdio.h>
#include <stdlib.h>

typedef struct IntNode {
    int data;
    struct IntNode *next;
} IntNode;

typedef struct IntStack {
    IntNode *top;
} IntStack;

void initIntStack(IntStack *s) {
    s->top = NULL;
}

int isEmptyInt(IntStack *s) {
    return s->top == NULL;
}

void pushInt(IntStack *s, int value) {
    IntNode *p = (IntNode *)malloc(sizeof(IntNode));

    if (p == NULL)
        return;

    p->data = value;
    p->next = s->top;
    s->top = p;
}
/* 4. Pop the top value */
char pop(Stack *s) {
    Node *p;
    char value;

    if (isEmpty(s))
        return '\0';

    p = s->top;
    value = p->data;
    s->top = p->next;
    free(p);

    return value;
}

/* 5. Peek at the top value */
char peek(Stack *s) {
    if (isEmpty(s))
        return '\0';

    return s->top->data;
}

/* Display all elements */
void displayStack(Stack *s) {
    Node *p = s->top;

    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }

    while (p != NULL) {
        printf("%c\n", p->data);
        p = p->next;
    }
}

typedef struct IntNode {
    int data;
    struct IntNode *next;
} IntNode;

typedef struct IntStack {
    IntNode *top;
} IntStack;

void initIntStack(IntStack *s) {
    s->top = NULL;
}

int isEmptyInt(IntStack *s) {
    return s->top == NULL;
}

void pushInt(IntStack *s, int value) {
    IntNode *p = (IntNode *)malloc(sizeof(IntNode));

    if (p == NULL)
        return;

    p->data = value;
    p->next = s->top;
    s->top = p;
}
int main() {
    Stack s;
    int choice;
    char value;
    char expr[100];

    initStack(&s);

    do {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Evaluate Postfix");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter a character: ");
            scanf(" %c", &value);
            push(&s, value);
        }
        else if (choice == 2) {
            if (!isEmpty(&s)) {
                printf("Removed: %c\n", pop(&s));
            }
            else {
                printf("Stack is empty\n");
            }
        }
        else if (choice == 3) {
            displayStack(&s);
        }
        else if (choice == 4) {
            printf("Enter postfix expression: ");
            scanf("%99s", expr);

            printf("Result: %d\n", evaluatePostfix(expr));
        }
        else if (choice == 5) {
            printf("Goodbye!\n");
        }
        else {
            printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}
    Stack s;
    char value;

    initStack(&s);

    push(&s, 'A');
    push(&s, '+');
    push(&s, 'B');
    push(&s, '*');
    push(&s, 'C');

    printf("Stack elements:\n");
    displayStack(&s);

    printf("Top value: %c\n", peek(&s));

    value = pop(&s);
    printf("Removed value: %c\n", value);

    printf("Stack after pop:\n");
    displayStack(&s);

    return 0;
}
