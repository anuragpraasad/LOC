// 4. Write a C program to enter two numbers and perform all arithmetic 
// operations using switch case

#include<stdio.h>
#include<conio.h>

int main(){
    int a=0, b=0;
    char c;
    printf("Opertor to use: \n");
    printf("Add(+)\n");
    printf("Subract(-)\n");
    printf("Divide(/)\n");
    printf("Multiply(*)\n");
    printf("Modulus(m)\n");
    scanf("%c", &c);
    printf("give the input of a and b: \n");
    scanf("%d %d", &a,&b);
    switch (c)
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d" , a-b);
        break;
    case '/':
        printf("%d", a/b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case 'm':
        printf("%d", a%b);
        break;
    default:
    printf("Sorry, wrong operator input.");
        break;
    }

}