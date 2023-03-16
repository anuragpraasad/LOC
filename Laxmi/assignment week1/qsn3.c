#include <stdio.h>
int main(){
int num,num1,r,sum=0;

printf("Enter the number :");
scanf("%d",&num);
num1=num;

do{
     r=num%10;
     sum+=r;
     num/=10;
     }while(num>0);
     
printf("The sum of all the digits of %d is %d",num1,sum);

return 0;
}