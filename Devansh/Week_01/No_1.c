// 1. Write a program to print the numbers from 1 to 100, but replace 
// multiples of 3 with "Fizz" and multiples of 5 with "Buzz".
#include<stdio.h>
#include<conio.h>

int main(){
    for(int i=1; i<=100; i++){
        if(i%3==0 && i%5==0){
            printf("Fizz Buzz\n");
        }
        else if (i%3==0){
            printf("Fizz\n");
        }
        else if (i%5==0){
            printf("Buzz\n");
        }
        else{
            printf("%d\n", i);
        }
    }
    return 0;
}