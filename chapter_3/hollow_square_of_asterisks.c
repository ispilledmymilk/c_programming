 #include <stdio.h>
 
 int main(){
     int side = 0;
     printf("enter the side length : ");
     scanf("%d", &side);
     
     if(side < 5){
         printf("Enter a larger number: ");
     }
     else{
         for(int i=0 ; i<side ; i++){
             for(int j=0 ; j<side ; j++){
                 
                 if(i == 0 || i == side - 1 || j==0 || j == side - 1){
                     printf("* ");
                 }
                 else{
                     printf("  ");
                 }
             }
             printf("\n");
         }
     }
 }
