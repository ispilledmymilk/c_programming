#include <stdio.h>
#include <string.h>
#define  STRANDSIZ 100

int main(){
    //declaring 2 arrays of char type, these will 
    char strand1[STRANDSIZ];
    char strand2[STRANDSIZ];
    int palin_len;
    
    int i, j, match;
    
    printf("Enter the strand of DNA molecule segment\n");
    scanf("%s", strand1);
    printf("Enter the complementary strand\n");
    scanf("%s", strand2);
    printf("Enter the length of the palindrome\n");
    scanf("%d", &palin_len);
    printf("\n%s\n%s\n", strand1, strand2);
    for (i = 0; i < strlen(strand1); ++i)       //this is to print the positions of the array 0,1,2,3...
        printf("%d", i % 10);
   
    printf("Palindrome of length is %d\n", palin_len);  //prints the inputted value of palidrome length
    
    for(i = 0; i <= strlen(strand1) - palin_len; ++i){      //for loop instills the fact that the checking cannot exceed strlen - palindrome length because if it does then the length of the palindrome will not exist in the string 
        match = 1;      //by default the match is 1
        for(j = 1; match && j <= palin_len; ++j){       //we check in both strings if the array element(basically the letter) is matching or not
            if(strand1[i + j - 1] != strand2[i + palin_len - j]){
                match = 0;
            }
        }
        if(match){
            printf("Palindrome at pos %d\n", i);            // this is printing the part of both the strings which are palindromes
            for(j = i; j < i +palin_len; ++j)
                printf("%c", strand1[j]);
            printf("\n");
            for(j = i ; j < i + palin_len; ++j)
                printf("%c", strand2[j]);
            printf("\n");
        }
    }
}
