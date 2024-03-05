#include <stdio.h>

void printchar(const char *sptr){
    for(; *sptr != '\0'; sptr++){
        printf("%c", *sptr);
    }
}

int main(){
    char string[] = "print characters of the string.";
    printchar(string);
    return 0;
}
