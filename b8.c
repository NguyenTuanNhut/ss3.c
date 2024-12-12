#include<stdio.h>
int main (){
    int number,number1,number2,number3,number4;
    printf("nhap so nguyen to ");
    scanf("%d",&number);
    number1=number/1000;
    number2=(number/100)%10;
    number3=(number/10)%10;
    number4=number%10;
    printf("%d",number4);
    printf("%d",number3);
    printf("%d",number2);
    printf("%d",number1);
return 0;
   
}
