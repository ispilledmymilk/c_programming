#include <stdio.h>

int main(){
    int num = 0, onum = 0 ;
    printf("enter the number: ");
    scanf("%d", &onum);
    
    num = onum;
    
    for(onum = num ; onum > 2; --onum){
        num *= onum - 1;
        
    }
 printf("the calculated factorial is %d", num);
 return 0;
}
