#include <stdio.h>

void tower(int n, char source, char dest, char middle){
    if(n == 1){
        printf("Move ring %d from %c to %c\n", n, source, dest);
        return;
    }
    
    tower(n - 1, source, middle, dest);
    printf("Move ring %d from %c to %c\n", n, source, dest);
    tower(n - 1, middle, dest, source);
}

int main(){
    printf("Enter the number of rings: ");
    int rings = 0;
    scanf("%d", &rings);
    
    tower(rings, 'A', 'C', 'B');
}
