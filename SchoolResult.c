#include <stdio.h>
int main() {
float eng,phy,che,math,cs,total,per;
    printf("=====WELCOME====\n");
    printf("Enter the marks of 5 subjects:\n");
    printf("English, Physics, Chemistry, Maths and Computer Science. \n");
    scanf("%f%f%f%f%f",&eng,&phy,&che,&math,&cs);
    if(eng>=0 && eng<=100 &&
      phy>=0 && phy<=100 &&
      che>=0 && che<=100 &&
      math>=0 && math<=100 &&
      cs>=0 && cs<=100 ){
    if (eng<35 || phy< 35||che< 35||math<35 ||cs<35){
        printf(" Result = FAIL");}
    
    else {
    total=eng+phy+che+math+cs;
    printf("Total marks = %.2f\n",total);
    per=total*100/500;
    printf("Percentage =%.2f\n",per);
    
    if (per<=100 && per>=90){
    printf("Grade = A\n");
        printf("Result = PASS\n");
    }
    else if (per<=89 && per>=80){
    printf("Grade = B\n");
         printf("Result = PASS\n");
    }
    else if (per<=79 && per>=70){
    printf("Grade = C\n");
         printf("Result = PASS\n");
    }
    else if (per<=69 && per>=60){
    printf("Grade = D\n");
         printf("Result = PASS\n");
    }
    else {
    printf("Result = FAIL\n");
    }}}
    else {
         printf("Invalid Entries\n");}
    return 0;
}