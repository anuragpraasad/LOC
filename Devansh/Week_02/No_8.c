// . Write a program to find the number of vowels and consonants in a string.

#include<stdio.h>
#include<string.h>

int main(){
    int n, count=0;
    scanf("%d", &n);
    char alpha[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
    scanf("%s", &alpha[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (alpha[i]=='a' || alpha[i]=='A' ||alpha[i]=='e'||alpha[i]=='E'||alpha[i]=='i'||alpha[i]=='I'||alpha[i]=='o'||alpha[i]=='O'||alpha[i]=='u'||alpha[i]=='U')
            count=count+1;
    }
    printf("total number of vowels are: %d\n", count);
    printf("total number of consonants are: %d\n", n-count);
    
    return 0;
}