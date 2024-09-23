#include <stdio.h>

int main() {
    int n = 0;
    
    
    scanf("%d", &n);

    if (n < 5) {
        printf("Invalid input, n should be at least 5.\n");
        return 1;
    }

    // Snake's initial configuration
    int head = 4;   // Snake's head starts at position 3
    int length = 2; // Snake's body length starts at 2
    int baitEaten;  // Flag to track if bait was eaten at a position

    // The snake moves one position to the right in each loop
    while (head < n) {
        baitEaten = 0; // Reset baitEaten for each move

        // Print the current state of the line
        for (int i = 0; i < n; i++) {
            if (i == head) {
                printf("H"); // Snake's head
            } else if (i >= head - length && i < head) {
                printf("X"); // Snake's body
            } else if (i % 2 == 1 && i > length) {
                printf("."); // Bait at odd positions to the right of the body
            } else {
                printf("_"); // Empty space
            }
        }
        printf("\n");

        // Check if the snake's head is on a bait
        if (head % 2 == 1) {
            baitEaten = 1; // Bait eaten at this position
        }

        // Move the snake's head to the right
        head++;

        // If bait was eaten, increase the snake's length
        if (baitEaten) {
            length++;
        }
    }

    return 0;
}
