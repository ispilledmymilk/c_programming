#include <stdio.h>

/*void top_row(int n){
    // for the top row
    printf(".");
    for(int i = 0; i < 2*n; ++i){
        printf(" ");
        if(i == n - 1){
            printf("*");
        }
    }
    printf(".");
    printf("\n");
}*/

void top_of_tree(int n){
    /*int rows = n + 1;
    for(int i = 0; i < rows; i++){
        
        for(int j = 0; j < (2*(rows - i) - 1); j++){
            printf(" ");
        }
        
        for(int k = 0; k < (2*i + 1); k++){
            if(k == 0 || k == (2*i - 1) || i == rows - 1){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }*/
    int rows = 5;

    // first outer loop to iterate through each loop
    for (int i = 0; i < rows; i++) {

        // first inner loop to print leading whitespaces
        for (int j = 0; j <= 2 * (rows - i) - 1; j++) {
            if((j == 0 && i == 0) || (j == 2*n && i == 2*n)){
                printf(".");
            }
            else{
            printf(" ");
            }
        }

        // second inner loop to print stars * and inner
        // whitespaces
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i || i == rows - 1) {
                printf("+ ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void tree(int n){
    //top_row(n);
    // for the top of the tree
    top_of_tree(n);
}

int main(){
    tree(4);
}
