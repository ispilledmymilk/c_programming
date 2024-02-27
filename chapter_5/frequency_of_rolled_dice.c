#include <stdio.h>
#include <stdlib.h>

int main(){
    int f1 = 0;
    int f2 = 0;
    int f3 = 0;
    int f4 = 0;
    int f5 = 0;
    int f6 = 0;
    int no_of_rolls = 0;
    
    printf("Enter the number of times you want to roll the dice: ");
    scanf("%d", &no_of_rolls);
    
    for(int roll = 1; roll<= no_of_rolls; roll++){
        int face = 1 + rand() % 6;          //generates the random number from 1 to 6. formula is face = starting_num + rand() % ending_num
        switch(face){
            case 1:
            ++f1;
            break;
            
            case 2:
            ++f2;
            break;
            
            case 3:
            ++f3;
            break;
            
            case 4:
            ++f4;
            break;
            
            case 5:
            ++f5;
            break;
            
            case 6:
            ++f6;
            break;
        }

    }
    printf("Face\tFrequency\n");
    printf("1\t      %d\n",f1);
    printf("2\t      %d\n",f2);
    printf("3\t      %d\n",f3);
    printf("4\t      %d\n",f4);
    printf("5\t      %d\n",f5);
    printf("6\t      %d\n",f6);
}
