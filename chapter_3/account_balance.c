#include <stdio.h>

int main(){
    int acc_num = 0;
    float beg_balance = 0;
    float total_charges = 0;
    float total_cred = 0;
    float credit_lim = 0;
    float new_bal = 0;
 printf("Enter account number: ");
        scanf("%d",&acc_num);

    
    while(acc_num !=-1){
               
        printf("enter beginning balance: ");
        scanf("%f", &beg_balance);
        
        printf("enter total charges: ");
        scanf("%f", &total_charges);
        
        printf("enter total credits: ");
        scanf("%f", &total_cred);
        
        printf("enter credit limit: ");
        scanf("%f", &credit_lim);
        
        new_bal = beg_balance+total_charges-total_cred;
        if(new_bal>credit_lim){
            printf("account:%d\n",acc_num);
            printf("credit limit:%.2f\n",credit_lim);
            printf("new balance: %.2f\n",new_bal);
            printf("credit limit exceeded\n");
            
        }
printf("Enter account number: ");
        scanf("%d",&acc_num);
        

        
    }
}

