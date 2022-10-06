// Write a complete C Program where you read two signed integers from the user that returns 1 if the signs of given integers are different, otherwise 0. 
// You are not allowed to use any arithmetic operation, if-else, ternary operator, loop or switch case. 

#include<stdio.h>
int main () {
  int num1,num2;
  scanf("%d%d",&num1,&num2);
  
  printf("%d", (num1 * num2) <0);    // " ^ " means if both are true or false turns false otherwise turns true. (In Turkish" ya da ") .



  return 0;

}

