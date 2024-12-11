#include <stdio.h>
int main(){
    const float PI=3.14;
    int R;
    scanf("%d",&R);
    float p=2*PI*R;
    float s=PI * (R *R);
printf("chu vi hinh tron la:%.2f \n",p);
printf("dien tich hinh tron la:%.2f",s);
    return 0;
}