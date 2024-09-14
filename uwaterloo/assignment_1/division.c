#include <stdio.h>

int main() {
    int num=0, denom=0;
    
    // Reading two integers: numerator and denominator
    printf("Enter the numerator: ");
    scanf("%d", &num);
    
    printf("Enter the denominator: ");
    scanf("%d", &denom);
    
    // Perform integer division
    int result = num / denom;
    int remainder = num % denom;
    
    // Check if there is a remainder and adjust based on the sign of num and denom
    if (remainder != 0) {
        // If the result is positive, we round away from zero by incrementing the result
        if ((num > 0 && denom > 0) || (num < 0 && denom < 0)) {
            result += 1;
        }
        // If the result is negative, we round away from zero by decrementing the result
        else if ((num > 0 && denom < 0) || (num < 0 && denom > 0)) {
            result -= 1;
        }
    }
    
    // Print the result followed by a newline
    printf("%d\n", result);
    
    return 0;
}
