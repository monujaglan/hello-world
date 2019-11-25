#include <stdio.h>
void main ()
  {
  int number1, number2;
  printf ("Dear user, please enter number 1:");
  scanf ("%d", & number1);
  printf ("Dear user, please enter number 2:");
  scanf ("%d", & number2);
  if (number1 > number2)
   printf ("Your first number %d is > than the second number %d \n", number1, number2);
  else
   // {
   if (number1 < number2)
    printf ("Your first number %d is < than the second number %d \n", number1, number2);
   else
    printf ("Your 1st number% d is == with 2nd number %d \n", number1, number2);
   //}
}
