// write a program to find the total number of alphabets , digits and special 
//  characters in a string
#include<stdio.h>
#include<string.h>

void main(){
    int alpha=0, nums=0, spec=0, n;
    scanf("%d",&n);
    char c[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
    scanf("%s", &c[i]);
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
            
        if((c[i]>=65 && c[i]<=90)|| (c[i]>=97 && c[i]<=122) )
          alpha++;

        else if(c[i]>=48 && c[i]<=57)
         nums++;

        else
         spec++;
 
 	
    }
    printf("total alphabets are: %d\n", alpha);
    printf("total numbers are: %d \n", nums);
    printf("total special character: %d\n", spec);
}