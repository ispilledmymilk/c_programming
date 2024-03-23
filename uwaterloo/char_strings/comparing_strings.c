#include <stdio.h>

int main(){
    //this is comparing strings
    // when you are checking if 2 strings are the same, the compiler checks if the memory addresses are the same, which is not, so it says it's false.
    char str1[10] = "abc", str2[10] = "abc";
    if(str1 == str2){
        printf("Happy!");
    }
    else{
        printf("Sad!");
    }
}
