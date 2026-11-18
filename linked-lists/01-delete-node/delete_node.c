#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Function to insert a node at the end of the linked list
void insert(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node *current = head;

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

// Function to delete a specific node
int deleteNode(int value) {

    // Check whether the linked list is empty
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return -1;
    }

    struct Node *current = head;
    struct Node *previous = NULL;

    // Search for the node containing the specified value
    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    // Check whether the value exists
    if (current == NULL) {
        printf("Element not found in the linked list.\n");
        return -1;
    }

    // If the node to delete is the head node
    if (previous == NULL) {
        head = current->next;
    } else {
        previous->next = current->next;
    }

    free(current);

    printf("Node containing %d deleted successfully.\n", value);

    return 0;
}

// Function to display the linked list
void display() {

    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node *current = head;

    printf("Linked list elements: ");

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

// Function to release all allocated memory
void freeList() {
    struct Node *current = head;

    while (current != NULL) {
        struct Node *nextNode = current->next;
        free(current);
        current = nextNode;
    }

    head = NULL;
}

// Main function
int main() {

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    printf("Before deletion:\n");
    display();

    deleteNode(30);

    printf("\nAfter deletion:\n");
    display();

    freeList();

    return 0;
}
