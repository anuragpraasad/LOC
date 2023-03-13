// 2. Write a program that takes a number as input and checks whether it is 
// positive, negative or zero.
#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    printf("Please enter the number here: ");
    scanf("%d", &a);
    if(a*-1>0){
        printf("The given number is negetive.\n");
    }
    else if(a*-1<0){
        printf("The given number is positive.\n");
    }
    else{
        printf("The number is zero.\n");
    }
}