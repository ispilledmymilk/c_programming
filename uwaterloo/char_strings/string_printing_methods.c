#include <stdio.h>

int main(){
    char s[] = "Hello";
    printf("%s\n", s);
    
    char t[] = {'h', 'e', 'l', 'l', 'o', '\0'};     //you need to add the \0 at the end
    printf("%s\n", t);
    
    char *u = "Hello";      //pointer is the same thing as arrays
    printf("%s\n", u);
    
    return 0;
}
