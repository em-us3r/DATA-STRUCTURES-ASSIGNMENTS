# Hash Table Insertion

## Assignment description

Write a Java program that accepts one or more integer values from the user and inserts them into a hash table with 10 positions.

The hash function used is:

**h(key) = key % 10**

The program should:
- Initialize the hash table's positions as empty.
- Ask the user to enter values. Enter -1 to stop.
- Calculate the index for each value using the modulo hash function.
- Insert values into the table.
- Handle collisions using **linear probing** by checking the next index until an empty position is found.
- Display the final hash table.

## How to run

Compile:

```bash
javac HashTable.java
```

Run:

```bash
java HashTable
```

## Notes

The program uses -1 to represent an empty slot. The table has a fixed size of 10.
