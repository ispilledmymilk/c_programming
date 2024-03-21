#include <stdio.h>

typedef struct {
    int id;
    int assgn[10];
    int mid;
    int fexam;
} student;

int main(){
    student stud = {11111, {80, 90, 88, 99, 77, 78, 76, 89, 90, 100}, 88, 78};
    
    int fgrade = 0;
    int sum = 0;
    
    for(int i = 0; i < 10; i++){
        sum += stud.assgn[i];
        fgrade = (0.2 * sum / 10) + (0.3 * stud.mid) + (0.5 * stud.fexam);
        printf("%d", fgrade);
    }
}
