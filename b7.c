#include<stdio.h>
int main(){
    int n,s;
   
    printf ("nhap n");
    scanf ("%d",&n);
    s=0;
    for(int i=0;i<4;i++){
        s=s+(n%10);
        n=n/10;
    }
    printf("tong la :%d",s);
    return 0;
}

