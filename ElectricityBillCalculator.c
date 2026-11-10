#include<stdio.h>
int main()
{
    float units,bill;
    printf("Enter the value of units consumed:");
    scanf("%f",&units);
    if (units<=100){
        bill=units*3+50;
        printf("bill=%f\n",bill);
    }
    else if (units<=300){
        bill=units*5+50;
        printf("bill=%f\n",bill);
    }
    else if (units<=500){
        bill=units*7+50;
        printf("bill=%f\n",bill);
    }
    else {
        bill=units*9+50;
        printf("bill=%f\n",bill);
    }
    if (bill>1000){
    bill=bill+(bill*15/100);
    printf("final bill= %f",bill);}
return 0;
}