// Write a C program to print the following pattern using loop
//  1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15
#include<stdio.h>

int main()
{
    int a=1;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            /* code */
            printf("%d",a);
            printf(" ");
            a+=1;
        }
            printf("\n");
        
        /* code */
    }
    
    return 0;
}
