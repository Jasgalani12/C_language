#include<stdio.h>
int main(){
    int a,i,sum=0;
    printf("Enter value of a: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}