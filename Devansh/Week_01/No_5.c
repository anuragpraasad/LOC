// 5. Write a C program to enter the radius of a circle and find its diameter, 
// circumference and area.

#include<stdio.h>
#include<conio.h>

int main(){
    int r;
    printf("Enter the radius: ");
    scanf("%d", &r);
    printf("Diameter: ");
    printf("%d\n", 2*r);
    printf("Circumference: %d\n", 2*22/7*r);
    printf("Area: %d\n", r*22/7*r);
    return 0;
}