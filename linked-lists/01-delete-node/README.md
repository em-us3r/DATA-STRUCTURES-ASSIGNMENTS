# Deleting a Specific Node from a Singly Linked List

## Question

Given a singly linked list containing the elements:

```text
10 -> 20 -> 30 -> 40 -> 50 -> NULL
```

Write a C program to delete the node containing the value 30 while maintaining the order of the remaining nodes.

## Description

This program implements a singly linked list using dynamically allocated nodes. Each node contains:

- `data`: The value stored in the node.
- `next`: A pointer to the next node.

The program includes functions to:

- `insert()`: Add a new node at the end of the list.
- `deleteNode()`: Find and delete the first node containing a specified value.
- `display()`: Display all nodes in the list.
- `freeList()`: Release the memory allocated to the remaining nodes.

## Algorithm Explanation

1. Check whether the linked list is empty.
2. Start at the head node and search for the node containing the specified value.
3. Keep track of both the current node and the previous node.
4. If the value is not found, display an appropriate message.
5. If the node is the head, update the head pointer to the next node.
6. Otherwise, update the previous node's `next` pointer to skip the node being deleted.
7. Free the memory occupied by the deleted node.
8. Display the updated linked list.

## Sample Output

```text
Before deletion:
Linked list elements: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
Node containing 30 deleted successfully.

After deletion:
Linked list elements: 10 -> 20 -> 40 -> 50 -> NULL
```

## Time and Space Complexity

- **Time Complexity:** O(n) — the list may need to be traversed to find the node.
- **Auxiliary Space Complexity:** O(1) — deletion uses a constant amount of additional memory.

## File

- `delete_node.c`
