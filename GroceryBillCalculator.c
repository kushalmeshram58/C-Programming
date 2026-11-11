#include <stdio.h>
int main(){
    int choice1,choice2,choice3,n1,n2,n3;
    printf("1.rice 1kg\n");
    printf("2.wheat 1kg\n");
    printf("3.almonds oil 1L\n");
    printf("4.cashew 1kg\n");
    printf("Enter your choice:");
    scanf("%d%d%d",&choice1,&choice2,&choice3);
    printf("Enter the Quantity:");
    scanf("%d%d%d",&n1,&n2,&n3);
    float price1,price2,price3,Amount1=0,Amount2=0,Amount3=0,Bill;
    printf("Enter price of the items:");
    scanf("%f%f%f",&price1,&price2,&price3);
    if (choice1>=1 && choice1<=4){
        Amount1=price1*n1;
    printf("Amount1=%f\n",Amount1);
    }
    if (choice2>=1 && choice2<=4){
        Amount2=price2*n2;
        printf("Amount2=%f\n",Amount2);
    }
    if (choice3>=1 && choice3<=4){
        Amount3=price3*n3;
        printf("Amount3=%f\n",Amount3);
    }
        Bill=Amount1+Amount2+Amount3;
        printf("Bill=%f\n",Bill);
    
    if (Bill>1000){
        Bill=Bill-(Bill*5/100);
        printf("Final Bill=%f\n",Bill);
    }
    return 0;
}