#include<stdio.h>

int main(){
    int r;
   float dia, area, ci;

   printf("\nEnter radius of circle: ");
   scanf("%d", &r);

    dia=2*r;
    printf("\nDiameter of circke : %f",dia);

   area = 3.141 * r * r;
   printf("\nArea of circle : %f ", area);

   ci = 2 * 3.141 * r;
   printf("\nCircumference : %f ", ci);
    return 0;
}