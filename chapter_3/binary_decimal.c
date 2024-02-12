#include <stdio.h>

int main(){
    int bin = 0;
    int num = 0;
    int n=1;
   int a,b,c,d,e;
    printf("enter binary: ");
    scanf("%d", &bin);
    
    a = bin%10;
    bin/=10;
    
    a = a*1;
      
    
  
    b = bin%10;
    bin/=10;
   
    b = b*2;
    
    
    c = bin%10;
    bin/= 10;
    
    c= c*4;

    
    d = bin%10;
    bin/=10;
    
        d *= 8;
      
    
    e = bin%10;
    bin/=10;
   
    e = e * 16;
    
    
    num = a+b+c+d+e;
    printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
    printf("%d",num);
}
