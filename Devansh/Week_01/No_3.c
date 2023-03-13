// 3.Write a program that takes a number as input and prints the sum of its 
// digits using a do-while loop.
#include<stdio.h>
#include<conio.h>

int main(){
    int a, s, sum=0;
    printf("Please enter the number here: ");
    scanf("%d", &a);
    do{
        s=a%10;
        sum=sum+s;
        a=(a-s)/10;
    }while(a>0);
    printf("Sum of the digits of the nmber: %d", sum);
    return 0;
}