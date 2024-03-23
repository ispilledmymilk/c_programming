#include <stdio.h>

int main(){
    char str[] = "count the number of times a character c occurs in a string";
    int i = 0;
    int cnt = 0;
    
    while (str[i]){
        if(str[i]== 'c'){
            cnt++;
        }
        i++;
    }
    printf("# of c = %d\n", cnt);
    return 0;
}
