#include<stdio.h>
int main (){
    int number[4];
    printf("nhap so \n");
    for(int i=0;i<4;i++){
        scanf("%d",&number[i]);
    }
    for(int i=3;i>-1;i--){
        printf("%d ",number[i]);
    }
    return 0;
}