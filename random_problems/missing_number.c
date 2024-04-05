#include <stdio.h>
#include <stdlib.h>

void array(int a[], int num){
    for(int i = 0; i < num ; ++i){
        printf("Enter the element(-1 to end): ");
        scanf("%d", &a[i]);
        
        if(a[i] == -1){
            return;
        }
    }
}

int main(){
    int n = 1000;
    int a[n];
    array(a, n);
    int i = 0;
    while(a[i] != -1){
        printf("%d\t", a[i]);
        i++;
    }
    printf("\n");
    printf("The size of the array is %d\n", i);
    
    int num = -1;
    for(int j = 0; j <= i; ++j){
        int found = 0;
        for(int x = 0; x < i; ++x){
            if(a[x] == j){
                found = 1;
                break;
            }
        }
        if(!found){
            num = j;
        }
    }
     if(num == -1){
            printf("The array is perfect!");
        }
        else{
            printf("The number missing is %d", num);
        }
}
