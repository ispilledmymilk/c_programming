#include <stdio.h>
#define MAX 65

int fn(int t){
    return (t + t);             //these are the plot points
}

int main(){
    char plot[MAX + 2];         //this is an array
    int i, t, funval;
    
    for(i = 0; i<= MAX; i+= 5) 
        printf("%5d",i);        //this is to print the numbers - x axis
    printf("\n");
    
    for(i = 0; i <=MAX; i += 5)
        printf("    |");        //this is to print the | for every interval - x axis
    printf("\n");
    
    for(i = 0; i <= MAX; i++)
        plot[i] = ' ';          //idk what this is doing
    
    for(t = 0; t <= 10; ++t){
        funval = fn(t);         //store the plot point in funval
        plot[funval] = '*';     // for the point  of the function, you use the array to plot at the right position
        plot[funval + 1] = '\0';    // this prints a space next to the * 
        printf("t=%2d%s\n", t, plot);   //this is to print the y axis
        plot[funval] = ' ';         //this is to print a space before the *
        plot[funval + 1] = ' ';     //this is to print a space before the *
    }
}
