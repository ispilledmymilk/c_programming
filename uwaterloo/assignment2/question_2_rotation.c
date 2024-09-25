#include <stdio.h>

void rotation(int w){
    int count = 0;
    int i, j ,k ,l;
    while(count < w){
    for(i = 0; i <= w ; ++i){
        printf("%d ", i);
    }
    for(j = i; j < w*w; j+=6){
        printf("%d ", j);
    }
    for(k = j; k  > w*w - w; k--){
        printf("%d ", k);
    }
    for(l = k; l>= w; l-=6){
        printf("%d ", i);
    }
    printf("\n");
    count++;
    }
}

int main(){
    rotation(6);
}
