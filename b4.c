#include<stdio.h>
int main(){
    int math,english, Literature;
    float average;
        printf("nhap math");
        scanf("%d",&math);
        printf("nhap english");
        scanf("%d",&english);
        printf("nhap Literature");
        scanf("%d",&Literature);
    average=(math+english+Literature)/3;
    printf ("diem trung binh la:%.2if",average);
    return 0;
}
