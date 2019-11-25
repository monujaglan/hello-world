#include<stdio.h>

void main()
 {
 int number1, number2;
 printf("Dear user, please enter number 1;");
 scanf("%d", & number1);
 printf("Dear user, please enter number 2; ");
 scanf("%d", & number2);

 if (number1 < number2)
  printf("Your first number %d is > than your second number %d \n ", number1, number2);
 printf("This text will appear anyway \n");

 if (number1 > number2)
  {
  printf("Still your number 1 %d is> than number 2 %d \n", number1, number2); 
  printf("But this text will not appear anyway \n ");
  }
}

