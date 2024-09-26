#include <stdio.h>

int hanoi(int n, char src, char dst, char hlp){
    if (n == 1){
        printf("Move from %c to %c\n", src, dst);
    }
    else{
        hanoi(n - 1, src, hlp, dst);
        hanoi(1, src, dst, hlp);
        hanoi(n - 1, hlp, dst, src);
    }
}

int main(){
    hanoi(3, 'L', 'R', 'M');
}
