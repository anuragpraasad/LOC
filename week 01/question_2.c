#include<stdio.h>
 
 int main(){
    printf("Enter a number : \n");
    int n;
    scanf("%d",&n);
    if(n>=0){printf("the number %d is positive.",n);}
    else{printf("the number is %d is negetive.",n);}

    return 0;
 }