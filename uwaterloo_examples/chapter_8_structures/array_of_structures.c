#include <stdio.h>

struct student{
    int id;
    int assgn;
    int mid;
    int fexam;
    int fgrade;
};

void calc(struct student a[], int size){
    for(int i = 0; i<size; ++i){
        a[i].fgrade = a[i].assgn * 0.2 + a[i].mid * 0.3 + a[i].fexam * 0.5;
    }
}

int main(){
    struct student cs137[5] = { {1111, 80, 88, 78},
                                {2222, 77, 90, 81},
                                {3333, 67, 66, 78},
                                {4444, 90, 100, 98},
                                {5555, 88, 77, 84}
        
    };
    
    calc(cs137, 5);
    
    for(int i = 0; i <5; ++i){
        printf("student %d, final - grade = %d\n", cs137[i].id, cs137[i].fgrade);
    }
}
