#include <stdio.h>

void tree_top(int n, int i, int z){
    
    if(i == (2 * n) + 1){
        printf("\n");
        return;
    }
    // n is the number of rows
    if (i == 0 || i == (2 * n)){
        printf(".");
    }
    else if(/*n >= 2 && */(i == n - z || i == n + z)){
        printf("+");
    } 
    /*else if ( n < 2 && (i == n)){
        printf("+");
    }*/
    else{
        printf(" ");
    }
    tree_top(n, i + 1, z);
    
}
// make another function for the multiples

void tree_rows(int n, int count, int z){
    if( count == 1){
        //tree_top(n, 0, z);
        return;
    }
    else{
        tree_top(n, 0, z);
        tree_rows(n, count - 1, z + 1);
    }
}

void top_line(int n, int i){
    if(i == 2*n + 1){
        printf("\n");
        return;
    }
    // n is the number of rows
    if (i == 0 || i == (2*n)){
        printf(".");
    }
    else if(i == n){
        printf("*");
    } 
    else{
        printf(" ");
    }
    top_line(n, i + 1);
    
}

void middle_row(int n, int i){
    if(i == 2*n + 1){
        printf("\n");
        return;
    }
    // n is the number of rows
    if (i == 0 || i == (2*n)){
        printf("*");
    }
    
    else{
        printf("+");
    }
    middle_row(n, i + 1);
}


void trunk(int n, int i){
    if(i == 2*n + 1){
        printf("\n");
        return;
    }
    // n is the number of rows
    if (i == 0 || i == (2*n)){
        printf(".");
    }
    else if(n >= 3 && (i == n - 1 || i == n + 1)){
        printf("|");
    } 
    else if ( n < 3 && (i == n)){
        printf("|");
    }
    else{
        printf(" ");
    }
    trunk(n, i + 1);
    
}

void trunk_rows(int n, int count){
    if( count == 1){
        trunk(n, 0);
        return;
    }
    else{
        trunk(n, 0);
        trunk_rows(n, count - 1);
    }
}

void tree(int n){
    top_line(n, 0);
    tree_rows(n, n, 1);
    middle_row(n, 0);
    trunk_rows(n, n);
}

/*int main(){
    tree(2);
}*/
