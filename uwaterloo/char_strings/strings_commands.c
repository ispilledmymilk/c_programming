#include <stdio.h>
#include <string.h>

int main(){
    
    char s[100] = "apples";
    char t[] = " to monkeys";
    char u[100];
    strcpy(u, s);
    // now u and s are both apples
    strncat(s, t, 4);
    printf("%s\n", s);
    // what the above line does is that it first breaks t into( to ) and then concatenates s to it and that is s now
    strcat(s, u);       
    // now s is "apples to " and then we concatenate u "apples" to s and change s to apples to apples
    printf("%s\n", s);
    
    int comp = strcmp("abc", "azenew");
    if(comp < 0){
        printf("%d\n", comp);
    }
    comp = strcmp("ZZZ ", "a");
    if(comp < 0){
        printf("%d\n", comp);
    }
}
