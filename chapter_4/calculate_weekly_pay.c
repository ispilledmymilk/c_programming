#include <stdio.h>

int main(){
    int manager_salary = 0;     // this is fixed weekly rates
    int worker_salary = 0;      // fixed hourly wage for 40 hrs + 1.5*hourly wage
    int comm_sales = 0;        // base salary 250 + 5.7%of the sales
    int piece_salary = 0;       //per piece amount paid
    int hours_worker = 0;
    int pieces = 0;
  
    int answer = 0;
    
    printf("Enter you employee pay code: ");
    scanf("%d", &answer);
    
    switch (answer){
        case 1:
        printf("enter your weekly wage: ");
        scanf("%d", &manager_salary);
        printf("salary for manager is %d\n", manager_salary);
        break;
        
        case 2:
        printf("enter your hourly wage: ");
        scanf("%d", &worker_salary);
        printf("enter the hours worked: ");
        scanf("%d", &hours_worker);
        int total_worker = 0;
        
        if(hours_worker > 40){
            total_worker = (40*worker_salary) + (hours_worker - 40)*(1.5*worker_salary);
        }
        else{
            total_worker = 40*worker_salary;
        }
       
        printf("salary for the hourly worker is %d\n", total_worker);
        break;
        
        case 3:
        printf("enter your sales: ");
        scanf("%d", &comm_sales);
        int base_sal = 250;
       
        int total_comm = 250 + (comm_sales*0.057);
       
        printf("salary for the commision worker is %d\n", total_comm);
        break; 
        
        case 4:
        printf("enter the fixed rate of your piece: ");
        scanf("%d", &piece_salary);
        printf("enter the number of pieces: ");
        scanf("%d", &pieces);
        
        int total_piece = piece_salary*pieces;
        
        printf("salary for the piece worker is %d\n", total_piece);
        break;
        
        default:
        printf("enter the number please\n.");
        break;
        
    }
    
    
}
