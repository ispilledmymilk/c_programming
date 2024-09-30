#include <stdio.h>


void top_of_tree(int n){
    
    int rows = n + 1;

    // first outer loop to iterate through each loop
    for (int i = 0; i < rows; i++) {

        // first inner loop to print leading whitespaces
        for (int j = 1; j <=  (rows - i) - 1; j++) {
            
            printf(" ");
            
        }

        // second inner loop to print stars * and inner
        // whitespaces
        for (int k = 0; k < i + 1; k++) {
            if(i == 0 && k == 0){
                printf(".");
                for(int z = 0; z < 2*n + 1; ++z){
                    printf(" ");
                    if(z == n/2)
                    printf("*");
                }
                printf(".");
                
            }
            else if (k == 0 || k == i || i == rows - 1) {
                printf(" + ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void tree(int n){
    
    // for the top of the tree
    top_of_tree(n);
}

int main(){
    tree(2);
}
