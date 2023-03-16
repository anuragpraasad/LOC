#include<stdio.h>

int main(){
float radius;
 
 printf("Enter the radius of the circle ");
 scanf("%f",&radius);
  
 printf("The diameter of the circle is %f\n",2*radius);
 printf("The circumference of the circle is %f\n",3.14*2*radius);
 printf("The area of the circle is %f\n",3.14*radius*radius);
 
 return 0;
}