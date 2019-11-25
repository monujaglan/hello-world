#include <stdio.h>

void main ()
  {
  int number1, number2;
  printf ("Dear user, please enter number 1:");
  scanf (" %d", & number1);
  printf ("Dear user, please enter number 2:");
  scanf (" %d", & number2);

  if (number1 > number2)
   {
   printf ("Your first number %d is> than the second number %d \n", number1, number2);
   printf ("Predators can be either two cases or 1. < 2. or 1. == 2. \n");
   }
  else
   {
   // printf ("Your first number% d is <than the second number %d \n", number1, number2);
   printf ("Your number 1 is either <than your number 2 \n");
   printf ("either your number 1 is == with number 2 \n");
   }
}
