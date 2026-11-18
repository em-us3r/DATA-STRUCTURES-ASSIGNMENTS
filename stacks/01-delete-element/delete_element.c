#include <stdio.h>

#define SIZE 100

int stack[SIZE];
int top = -1;

// Function to insert an element
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack is full.\n");
        return;
    }

    top++;
    stack[top] = value;
}

// Function to delete a specific element
int deleteElement(int value) {

    // Check whether the stack is empty
    if (top == -1) {
        printf("Stack is empty.\n");
        return -1;
    }

    int position = -1;

    // Search for the element from the top of the stack
    for (int i = top; i >= 0; i--) {
        if (stack[i] == value) {
            position = i;
            break;
        }
    }

    // Check whether the element exists
    if (position == -1) {
        printf("Element not found in the stack.\n");
        return -1;
    }

    // Shift elements above the deleted position down by one
    for (int i = position; i < top; i++) {
        stack[i] = stack[i + 1];
    }

    top--;

    printf("Element %d deleted successfully.\n", value);

    return 0;
}

// Function to display the stack
void display() {

    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements (bottom to top): ");

    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

// Main function
int main() {

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    printf("Before deletion:\n");
    display();

    deleteElement(30);

    printf("\nAfter deletion:\n");
    display();

    return 0;
}
