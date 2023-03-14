#include<stdio.h>
#include<math.h>

int main(){
    printf("Enter a number :\n");
    int n,j,sum=0;
    scanf("%d",&n);
    do{j=n%10;
        sum=sum+j;
        n=n/10;}
    while(n>0);
    printf("the sum of the digits of given number is equal to : %d",sum);
    return 0;
}