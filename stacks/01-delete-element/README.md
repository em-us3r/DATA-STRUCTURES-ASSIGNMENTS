# Deleting a Specific Element from a Stack

## Question

Given a stack containing the elements:

```text
10 20 30 40 50
```

Write a C program to delete a specified element (30) from the stack while maintaining the order of the remaining elements.

## Description

This program implements a stack using an array. It includes functions to:

- `push()`: Insert an element into the stack.
- `deleteElement()`: Search for and delete the first occurrence of a specified value.
- `display()`: Display the stack from bottom to top.

Although a normal stack follows the Last In, First Out (LIFO) principle, this exercise requires deleting a specified value that may not be at the top. The program searches for the value and shifts the elements above it down by one position.

## Algorithm Explanation

1. Check whether the stack is empty.
2. Search for the specified value, starting from the top.
3. If the value is not found, display an appropriate message.
4. If the value is found, shift every element above it one position down.
5. Decrease `top` by one.
6. Display the updated stack.

## Sample Output

```text
Before deletion:
Stack elements (bottom to top): 10 20 30 40 50
Element 30 deleted successfully.

After deletion:
Stack elements (bottom to top): 10 20 40 50
```

## Time and Space Complexity

- **Time Complexity:** O(n) — searching for the element and shifting elements may each require traversing part of the stack.
- **Auxiliary Space Complexity:** O(1) — deletion uses a constant amount of additional memory.

## File

- `delete_element.c`
