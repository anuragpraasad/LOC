// 6. Write a program to find maximum occurring integer in an array.
#include<stdio.h>

int max(int array[], int n) 
{
    int i, j, mc, count;
     int maxCount = 0;
    for(i = 0; i< n; i++)   
    {
        count = 1;
        for(j = i+1; j < n; j++)  
        {
            if(array[j] == array[i])
            {
                count++;     
                if(count > maxCount)
                {
                    mc = array[j];
                }
            }
        }
    }
    return mc;
}
int main()
{
    int n;             
    printf("Enter the number of elements ");
    scanf("%d",&n);    
    int array[n];   
    printf("Enter the array elements");
    for(int i=0;i<n;i++)   
    {
        scanf("%d",&array[i]);
    } 
    int mc = max(array, n);  
    printf("\n Maximum Repeating Element : %d",mc);  
    return 0;
}