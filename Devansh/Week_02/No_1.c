//1. Write a program to count the number of occurrences of a number in an array 
//  using function.
#include<stdio.h>
int count(int c,int u, int b[]){
    int x=0;
    for (int j = 0; j < u; j++)
    {
        /* code */
        
        if (b[j]==c)
            x=x+1;
        
    }
    printf("%d", x);
    return x;
}

int main(){
    int n, o;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    scanf("%d", &o);
    count(o, n ,a);
    
        return 0;
}

