// 9. Write a C program to print the following pattern using loop
//  * * * * *
//  * * * *
//  * * * 
//  * *
//  *
#include<stdio.h>

int main(){
    for (int i = 0; i < 6; i++)
    {
        /* code */
        for (int j = i; j < 6; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
    return 0;
}