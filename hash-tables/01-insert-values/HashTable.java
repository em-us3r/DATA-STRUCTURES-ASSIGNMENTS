import java.util.Scanner;

public class HashTable {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int[] table = new int[10];

        // Initialize the hash table
        for (int i = 0; i < 10; i++) {
            table[i] = -1;
        }

        System.out.println("Enter values to insert (-1 to stop):");

        while (true) {
            System.out.print("Enter value: ");
            int value = input.nextInt();

            if (value == -1) {
                break;
            }

            // Calculate hash index
            int index = value % 10;

            // Check if the index is occupied
            while (table[index] != -1) {
                index = (index + 1) % 10;
            }

            // Insert the value
            table[index] = value;

            System.out.println("Value inserted at index " + index);
        }

        // Display the hash table
        System.out.println("\nHash Table:");

        for (int i = 0; i < 10; i++) {
            System.out.println("Index " + i + " = " + table[i]);
        }

        input.close();
    }
}
