#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nAFTER SWAPPING!!\n\n");
    printf("A=%d \nB=%d",a,b);
}