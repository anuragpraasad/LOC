// . Write a program to move all the negative elements to one side of the array
#include<stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if (a[i]>a[j])
            {
                /* code */
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
            
        }
    }
        for(int i=0;i<n;i++){
            printf("%d\n",a[i]);
        }
    return 0;
}