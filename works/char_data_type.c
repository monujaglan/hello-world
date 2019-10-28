#include <stdio.h>//we will use printf and scanf
void main() //main function is "entry point"'and it should obliga
 {
 char a='A';
 printf("a variable value as symbol: %c\n", a);
 printf("a variable value as decimal number: %d\n", a);
 printf("a variable value as octal number: %o\n", a);
 printf("a variable value as hexadecimal number: %x\n", a);

 printf("Dear user, please enter any one symbol:");
 scanf("%c",&a);
 printf("a variable value as symbol: %c\n", a);
 printf("a variable value as decimal namber: %d\n", a);
 printf("a variable value as octal namber: %o\n", a);
 printf("a variable value as hexadecimal namber: %x\n", a);
 
 char b=127;
 printf("b char variable value as decimal namber (?127): %d\n",b);
 char c=128;
 printf("b char variable value as decimal namber (?128): %d\n",c);
 char d=129;
 printf("b char variable value as decimal namber (?129): %d\n",d);
 printf ("Characters: %c %c \n", 'a', 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
  }
//we use void main,beacuse our main doesn't return
