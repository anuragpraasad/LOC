#include <stdio.h>
int main(){
     int i;
     for(i=1;i<=100;i++){
          if(i%3==0 || i%5 ==0){
               if(i%3==0 && i%5==0){
                    // by printing number if divisible by both
                    printf("%d",i);
               }else if(i%3==0){
                    printf("Fizz");
               }else if(i%5==0){
                    printf("Buzz");
               }printf("\n");
               }
             else
             printf("%d\n",i);
             }
 return 0;
 }
 