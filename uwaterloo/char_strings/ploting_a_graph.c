#include <stdio.h>
#define MAX 80 

int fn(int t){
    return (t*t + 1);
}

int main(){
    
    char plot[MAX + 2];
    int funval;
    
    for(int i = 0; i <= MAX; i += 5){
        printf("%5d", i);       //this is to print the numbers on the x axis
    }
    printf("\n");
    
    for(int i = 0; i <= MAX; i += 5){
        printf("    |");        //this is to print the x axis
    }
    printf("\n");
    
    for(int i = 0; i < MAX + 1; ++i){
        plot[i] = ' ';          //this is to set the entire array of each line to be space
    }
    
    for(int t = 0; t <= 10; ++t){
        funval = fn(t);     //this is to set the value returned by the function
        plot[funval] = '*';         //at that element we will print a *
        plot[funval + 1] = '\0';    //at the next element we print a null char
        printf("t=%2d%s\n", t, plot);   //this is to print the x axis
        plot[funval] = ' ';         //this is to reset the value of the array at the position funval and funval + 1
        plot[funval + 1] = ' ';
        
        
        
    }
}
