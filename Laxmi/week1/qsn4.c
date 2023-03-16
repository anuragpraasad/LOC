#include <stdio.h>

int main(){
     int num1,num2,i;
     int operation;
     
     printf("Enter the two number :");
     scanf("%d %d",&num1,&num2);
     
  
     printf("Enter the operation you want to do : \n Enter '1' for addition \n Enter '2' for substration \n Enter '3' for multiplication and \n Enter '4' for division\n");
     scanf("%d",&operation);
 
     switch(operation){
        case 1:
        printf("The addition of the two numbers is %d",(num1+num2));
        break;
        case 2:
        printf("The substraction of two numbers is %d",num1-num2);
        break;
        case 3:
        printf("The multiplication of the two numbers is %d",num1*num2);
        break;
        case 4:
        printf("The division of the two numbers is %d",num1/num2);
        break;
        default:
        printf("Enter valid keyword?");
     }

return 0;
}
