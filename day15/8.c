#include<stdio.h>
int main(){
    int i,j,a=1;
    for ( i = 1; i <=5; i++)
    {
        for (j = i;j>=1;j--)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    
}