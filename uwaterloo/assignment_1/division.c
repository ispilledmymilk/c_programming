#include <stdio.h>

int main() {
    int num=0, denom=0;

    scanf("%d", &num);
    
    scanf("%d", &denom);
    
    int result = num / denom;
    int remainder = num % denom;
    
    if (remainder != 0) {
        
        if ((num > 0 && denom > 0) || (num < 0 && denom < 0)) {
            result += 1;
        }
        
        else if ((num > 0 && denom < 0) || (num < 0 && denom > 0)) {
            result -= 1;
        }
    }
    
    printf("%d\n", result);
    
    return 0;
}
