#include <stdio.h>

int quality(int avg){
    int point = 0;
    
    if(avg<=100 && avg>90){
        point = 4;
    }
    else if(avg<=90 && avg>80){
        point = 3;
    }
    else if(avg<=80 && avg>70){
        point = 2;
    }
    else if(avg<=70 && avg>60){
        point = 1;
    }
    else{
        point = 0;
    }
    
    return point;
}

int main(){
    int avg = 0;
    printf("Enter you average grade: ");
    scanf("%d", &avg); 
    
    printf("The point with respect to your grade is %d", quality(avg));
}
