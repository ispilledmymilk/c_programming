#include <stdio.h>

struct student{
    int id;
    int assgn[10];
    int mid;
    int fexam;
    int fgrade;
};

int function(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size; ++i){
        sum += array[i];
    }
    
    return sum;
}

int main(){
    struct student a[4] = {{ 11111, {80, 90, 88, 99, 77, 78, 76, 89, 90, 100}, 88, 0},
        { 11112, {23, 43, 68, 89, 71, 58, 70, 69, 54, 40}, 60, 0},
        { 11113, {60, 50, 72, 64, 49, 57, 40, 29, 39, 10}, 38, 0},
        { 11114, {45, 92, 58, 49, 33, 43, 64, 29, 40, 10}, 48, 0}
    };

    for(size_t i = 0; i < 4; ++i){
        int assgn_sum = function(a[i].assgn, 10);
        
        a[i].fexam = (50 - (0.2 * assgn_sum / 10) - (0.3 * a[i].mid)) * 2;
        
        if(a[i].mid > 50){
            printf("Student ID = %d : You have passed your midterm\n", a[i].id );
        }
        else{
            printf("Student ID = %d : You need %d to pass the course\n",a[i].id, a[i].fexam);
        }
    }
    
}
