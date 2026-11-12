#include <stdio.h>
int main() {
    int choice;
float bankbalance=10000,Wamount,Damount,ReBalance;
    printf("=====WELCOME=====\n");
    printf("Your bank balance is rs 10000\n");
    printf("1. Check bank balance\n");
    printf("2. Whitdrawal Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    
    if (choice>=1 && choice<=4){
        if (choice==1){
             printf("Bank Balance =%.2f\n",bankbalance);} 
        else if (choice==2){
            printf("Enter the Whitdrawal Amount:\n ");
            scanf("%f",&Wamount);
            if(Wamount<=bankbalance){
            ReBalance = bankbalance-Wamount;
            printf("===Whitdrawal successfully===\n");
             printf("Remaining Balance =%.2f\n",ReBalance);}
        else {
                printf("==== Insufficient Balance ====");}
        }
    else if (choice==3){
        printf("Enter the Deposit Amount:\n");
        scanf("%f",&Damount);
        ReBalance = bankbalance+Damount;
        printf("===Deposite Successfully===\n");
        printf("Remaining Balance =%.2f\n",ReBalance);
    }
        else {
        printf("Exit");}
    }
        else {
        printf("Exit");
            }
    return 0;
}