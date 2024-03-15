#include <stdio.h>
//learning about unions
//basics are: derived data type,members shar the same memory
//it shares the space between the var 
union number{
        int x;
        double y;
    };
    
int main() {
    union number value;
    
    value.x = 100;
    puts("Put 100 in x and print both x and y");
    printf("%d\t%0.2f\n", value.x, value.y);
    
    value.y = 100.00;
    puts("Put 100 in y and print both x and y");
    printf("%d\t%0.2f\n", value.x, value.y);
    
    
    
   return 0;
}
