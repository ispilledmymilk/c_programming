#include <stdio.h>
#include <assert.h>

void numberPairsHelper(int n, int last_digit) {
    // Base case: if n is 0, stop the recursion
    if (n == 0) {
        return;
    }

    // Recursive call with the remaining number
    int current_digit = n % 10;
    numberPairsHelper(n / 10, current_digit); // Recursion goes to the next digit

    // Print the current digit according to the rule
    if (current_digit != last_digit) {
        
        printf("%d%d", current_digit, current_digit); // Print the digit twice otherwise
    }
}

void numberPairs(int n) {
    // Start the recursion with -1 as the initial last_digit (since no digit has been seen yet)
    numberPairsHelper(n, -1);
}

/*int main() {
    numberPairs(123444); // Example test case
    return 0;
}*/
