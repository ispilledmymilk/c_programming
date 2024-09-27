#include <stdio.h>
#include <assert.h>
#include "functions.h"

void square(int w) {
   int count = 1;  // Start counting from 1


   // Outer loop for each row
   for (int i = 0; i < w; i++) {
       // Inner loop for each column in the row
       for (int j = 0; j < w; j++) {
           printf("%d ", count);
           count++;  // Move to the next number
       }
       printf("\n");  // Move to the next line after each row
   }
}


void spiral(int w){
  
   int i, j ,k, l;
   int m = 0;
   int x = 1;
   int incre1 = 0;
   int decre1 = 0;
   int incre2 = 0;
   int decre2 = 0;
  
   while(x <= w/2){
       for(i = m + 1; i < w + incre1; i++){
           printf("%d ", i);
       }
       for(j = i; j < w*w - decre1; j+=w){
           printf("%d ", j);
       }
      
       for(k = j; k  > w*w - w - incre2; k--){
           printf("%d ", k);
       }
       incre2 += (w - 1);
       for(l = k - w + 1; l > w + decre2; l= l - w){
           printf("%d ", l);
           m = l;
       }
       x++;
       incre1 += w - 1;
       decre1 += w + 1;
       decre2 += w + 1;
     
   }
   if (w % 2 != 0) {
       printf("%d ", w * w / 2 + 1);
   }
   printf("\n");
}


void rotation(int w){
    int n = 0; // this is to find the number of layers
    int a = 0; // this is to keep track of the number of layers
    int i = 1, x, j, x1; // i is to print values in each loop, and x is the updated i
    int incre1 = 0; // this is to incre i in the 1st halp of the loop
    int decre1 = 0; // this is to decre i in the 2nd half of the loop
    int z;
    int incre2 = 0;
    int decre2 = 0;
    int y = 0;
    if(w % 2 == 0){
        n = w/2;
    }
    else{
        n = w/2 + 1;
    }
    //while(a <= n){
     //  printf("x");
     //  a++;
        for(i = 1; i < w; i++){
           // printf("x");
            x = i;
            printf("%d ", x);
            printf("%d ", x = x + w - 1 + incre1);
            printf("%d ", x = x + (w * w) - w - decre1);
            printf("%d ", x = x - w + 1 - incre1);

            incre1 += w - 1;
            decre1 += w + 1;
            
            
            }
            if ( n != w/2){
                printf("%d ", w * w / 2 + 1);
            //printf("\n");
            
           /*if(x == w + 1 + y){
                
                //printf("yes");
            //while(y <= w*w - 1){
                for(z = x; z < w + 2; ++z){
                    if(x == w + 1 + y){
                    
                    x = z + 1;
                   
                    
                    printf("%d ", x);
                    printf("%d ", x = x + w - ((w + 1)/2) + incre2);
                    printf("%d ", x = x + (w * w) - 2*w - w - decre2);
                    printf("%d ", x = x - (w/2) - incre2);
                    
                    incre2 += w - 1;
                    decre2 += w + 1;
                
                printf("\n");
                y += w + 1;
            }
        
    }
    
            }
}
    printf("\n");*/
}}

/*int main(){
    rotation(3);
}*/
