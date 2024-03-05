#include <stdio.h> 
#include <ctype.h>

void convert_to_upper_case(char *sptr){
    while(*sptr != '\0'){
        *sptr = toupper(*sptr);
        ++sptr;
    }
}

int main(){
    char string[] = "cHAracter is $33.88";
    
    printf("%s\n", string);
    
    convert_to_upper_case(string);
    
    printf("%s\n", string);
}
