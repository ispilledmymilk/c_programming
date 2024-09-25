#include <stdio.h>
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
     int i = 1;
     int incre = 0;
     int decre = 0;
     for(i = 1; i < w; i++){
         int x = i;
        printf("%d ", x);
        printf("%d ", x = x + w - 1 + incre);
        printf("%d ", x = x + (w*w) - w - decre);
        printf("%d ", x = x - w + 1 - incre);
        
        
        incre += w - 1;
        decre += w + 1;
        
}

}

