#include<stdio.h>
int main(){
    int n,s,number1,number2,number3,number4;
   
    printf ("nhap n");
    scanf ("%d",&n);
    s=0;
    number1=n/1000;
    number2=(n/100)%10;
    number3=(n/10)%10;
    number4=n%10;
    s=number1+number2+number3+number4;
    printf("tong la :%d",s);
    return 0;
}

