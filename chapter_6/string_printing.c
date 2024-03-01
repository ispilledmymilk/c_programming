#include <stdio.h>
#define SIZE 20

int main(){
    char string1[SIZE] = "";
    char string2[] = "string literal";
    
    printf("Enter a string of 19 char: ");
    scanf("%19s", string1);
    
    printf("The string you inputted is ");
    
    for(size_t i = 0; i <SIZE && string1[i] != '\0'; ++i){
        printf("%c", string1[i]);
    }
}
