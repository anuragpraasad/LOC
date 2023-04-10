#include <stdio.h>

int main (){
   int num[50];
   int a, n;
   printf("Enter array length");
   scanf("%d", &n);
   printf("Enter elements of array");

   for (int i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (int i = 0; i < n; ++i){
      for (int j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The array in ascending order is: ");
   for (int i = 0; i < n; ++i){
      printf("%d", num[i]);
   }

   return 0;
}
