// 5. Write a C program to copy the elements of one array into another array
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        b[i]=a[i];
    }
    printf("this is the copied array:\n");
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d",b[i]);
    }
    
    
    return 0;
}