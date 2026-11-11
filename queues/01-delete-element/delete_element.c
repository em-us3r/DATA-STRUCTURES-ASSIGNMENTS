#include <stdio.h>

#define SIZE 100

int queue[SIZE];
int front = -1;
int rear = -1;

// Function to insert an element
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full.\n");
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = value;
}

// Function to delete a specific element
int deleteElement(int value) {

    // Check whether the queue is empty
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return -1;
    }

    int position = -1;

    // Search for the element
    for (int i = front; i <= rear; i++) {
        if (queue[i] == value) {
            position = i;
            break;
        }
    }

    // Check whether the element exists
    if (position == -1) {
        printf("Element not found in the queue.\n");
        return -1;
    }

    // Shift elements to fill the deleted position
    for (int i = position; i < rear; i++) {
        queue[i] = queue[i + 1];
    }

    rear--;

    // Reset queue if it becomes empty
    if (rear < front) {
        front = -1;
        rear = -1;
    }

    printf("Element %d deleted successfully.\n", value);

    return 0;
}

// Function to display the queue
void display() {

    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");

    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

// Main function
int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    printf("Before deletion:\n");
    display();

    deleteElement(30);

    printf("\nAfter deletion:\n");
    display();

    return 0;
}
