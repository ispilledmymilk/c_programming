#include <stdio.h>

int main(){
    
    char s[] = "Hello";
    printf("s is %s\n", s);
    s[1] = 'a';
    
    printf("s is %s\n", s);
    printf("Size of s is %zu\n", sizeof(s));    //will return 6 because it also counts the null char
    
    char *u = "Hello";
    printf("u is %s\n", u);     // this hello is not an array, it is a string literal... thus it cant be modified
    printf("Size of u is %zu\n", sizeof(u));
    
    char *hi = "Hello" " World";        //you can combine 2 strings into one string literal and this too cant be modified
    printf("hi is %s\n", hi);
    printf("Size of hi is %zu\n", sizeof(hi));
    return 0;
}
