#include <stdio.h>
#define MAX 65

int fn(int t){
    return (t + t);
}

int main(){
    char plot[MAX + 2];
    int i, t, funval;
    
    for(i = 0; i<= MAX; i+= 5) 
        printf("%5d",i);
    printf("\n");
    
    for(i = 0; i <=MAX; i += 5)
        printf("    |");
    printf("\n");
    
    for(i = 0; i <= MAX; i++)
        plot[i] = ' ';
    
    for(t = 0; t <= 10; ++t){
        funval = fn(t);
        plot[funval] = '*';
        plot[funval + 1] = '\0';
        printf("t=%2d%s\n", t, plot);
        plot[funval] = ' ';
        plot[funval + 1] = ' ';
    }
}
