# LABORATORY WORK NO.1. - ROOTS - REPORT 

## THEORY
In mathematics, the bisection method is a root-finding method that applies to any continuous functions for which one knows two values with opposite signs. The method consists of repeatedly bisecting the interval defined by these values and then selecting the subinterval in which the function changes sign, and therefore must contain a root. It is a very simple and robust method, but it is also relatively slow. Because of this, it is often used to obtain a rough approximation to a solution which is then used as a starting point for more rapidly converging methods.The method is also called the interval halving method, the binary search method, or the dichotomy method.

For polynomials, more elaborated methods exist for testing the existence of a root in an interval (Descartes' rule of signs, Sturm's theorem, Budan's theorem). They allow extending bisection method into efficient algorithms for finding all real roots of a polynomial; see Real-root isolation.

f(x) = 0∧sgn(f(x+δx)) ̸= sgn(f(x−δx)) => f(x+δx)·f(x−δx) < 0

### CODE
```
#include<stdio.h>
#include<math.h>

int main() {
 float a,c ,b ,x ,delta_x,funkca, funkcb, funkcx;
 int i=0;

  printf("Calculating the root of a function: \n");

  printf("User, please enter start limit: ");
  scanf ("%f", &a);

  printf("User, please enter end limit: ");
  scanf ("%f", &b);

  printf("User please enter accuracy: ");
  scanf ("%e", &delta_x);

  printf("User, please enter for what y you can calculate x: ");
  scanf ("%f", &c);
  funkca = (1+a)*sinh(a) - c; funkcb = (1+b)*sinh(b) - c;

  printf("(1+%7.3f)*sinh(%7.3f) - %7.3f =%7.3f\t\t\t\t\t\t\t",a,a,c,funkca);
  printf("(1+%7.3f)*(%7.3f) - %7.3f =%7.3f\n",b,b,c,funkcb);

 while ((b-a)>delta_x){
  x = (a+b)/2.;
  if(funkca*((1+x)*sinh(x)-c)>0)
   a = x;
  else
   b = x;
  printf("(1+%7.3f)*sinh(%7.3f) - %7.3f =%7.3f\t",a,a,c,funkca);
  printf("(1+%7.3f)*sinh(%7.3f) - %7.3f =%7.3f\t",b,b,c,funkcb);
  printf("(1+%7.3f)*sinh(%7.3f) - %7.3f =%7.3f\n",x,x,c,(1+x)*sinh(x)-c);
   i++;
 }

 printf("\nNumber of iterations: %d\n",i);
 printf("The start is at x = %.5f because (1 + x) * sinh(x) is %.3f\n",x,(1 + x)*sinh(x));
 return 0;
}


```

### RESULT
```
Calculating the root of a function: 
User, please enter start limit: 0
User, please enter end limit: 20
User please enter accuracy: 2.e-5
User, please enter for what y you can calculate x: 3.69
(1+  0.000)*sinh(  0.000) -   3.690 = -3.690                                                    (1+ 20.000)*( 20.000) -   3.690 =5094234624.000
(1+  0.000)*sinh(  0.000) -   3.690 = -3.690    (1+ 10.000)*sinh( 10.000) -   3.690 =5094234624.000     (1+ 10.000)*sinh( 10.000) -   3.690 =121141.872
(1+  0.000)*sinh(  0.000) -   3.690 = -3.690    (1+  5.000)*sinh(  5.000) -   3.690 =5094234624.000     (1+  5.000)*sinh(  5.000) -   3.690 =441.529
(1+  0.000)*sinh(  0.000) -   3.690 = -3.690    (1+  2.500)*sinh(  2.500) -   3.690 =5094234624.000     (1+  2.500)*sinh(  2.500) -   3.690 = 17.486
(1+  1.250)*sinh(  1.250) -   3.690 = -3.690    (1+  2.500)*sinh(  2.500) -   3.690 =5094234624.000     (1+  1.250)*sinh(  1.250) -   3.690 = -0.086
(1+  1.250)*sinh(  1.250) -   3.690 = -3.690    (1+  1.875)*sinh(  1.875) -   3.690 =5094234624.000     (1+  1.875)*sinh(  1.875) -   3.690 =  5.463
(1+  1.250)*sinh(  1.250) -   3.690 = -3.690    (1+  1.562)*sinh(  1.562) -   3.690 =5094234624.000     (1+  1.562)*sinh(  1.562) -   3.690 =  2.154
(1+  1.250)*sinh(  1.250) -   3.690 = -3.690    (1+  1.406)*sinh(  1.406) -   3.690 =5094234624.000     (1+  1.406)*sinh(  1.406) -   3.690 =  0.925
(1+  1.250)*sinh(  1.250) -   3.690 = -3.690    (1+  1.328)*sinh(  1.328) -   3.690 =5094234624.000     (1+  1.328)*sinh(  1.328) -   3.690 =  0.395
(1+  1.250)*sinh(  1.250) -   3.690 = -3.690    (1+  1.289)*sinh(  1.289) -   3.690 =5094234624.000     (1+  1.289)*sinh(  1.289) -   3.690 =  0.149
(1+  1.250)*sinh(  1.250) -   3.690 = -3.690    (1+  1.270)*sinh(  1.270) -   3.690 =5094234624.000     (1+  1.270)*sinh(  1.270) -   3.690 =  0.030
(1+  1.260)*sinh(  1.260) -   3.690 = -3.690    (1+  1.270)*sinh(  1.270) -   3.690 =5094234624.000     (1+  1.260)*sinh(  1.260) -   3.690 = -0.028
(1+  1.260)*sinh(  1.260) -   3.690 = -3.690    (1+  1.265)*sinh(  1.265) -   3.690 =5094234624.000     (1+  1.265)*sinh(  1.265) -   3.690 =  0.001
(1+  1.262)*sinh(  1.262) -   3.690 = -3.690    (1+  1.265)*sinh(  1.265) -   3.690 =5094234624.000     (1+  1.262)*sinh(  1.262) -   3.690 = -0.014
(1+  1.263)*sinh(  1.263) -   3.690 = -3.690    (1+  1.265)*sinh(  1.265) -   3.690 =5094234624.000     (1+  1.263)*sinh(  1.263) -   3.690 = -0.006
(1+  1.264)*sinh(  1.264) -   3.690 = -3.690    (1+  1.265)*sinh(  1.265) -   3.690 =5094234624.000     (1+  1.264)*sinh(  1.264) -   3.690 = -0.003
(1+  1.264)*sinh(  1.264) -   3.690 = -3.690    (1+  1.265)*sinh(  1.265) -   3.690 =5094234624.000     (1+  1.264)*sinh(  1.264) -   3.690 = -0.001
(1+  1.264)*sinh(  1.264) -   3.690 = -3.690    (1+  1.265)*sinh(  1.265) -   3.690 =5094234624.000     (1+  1.264)*sinh(  1.264) -   3.690 = -0.000
(1+  1.264)*sinh(  1.264) -   3.690 = -3.690    (1+  1.265)*sinh(  1.265) -   3.690 =5094234624.000     (1+  1.265)*sinh(  1.265) -   3.690 =  0.000
(1+  1.264)*sinh(  1.264) -   3.690 = -3.690    (1+  1.265)*sinh(  1.265) -   3.690 =5094234624.000     (1+  1.265)*sinh(  1.265) -   3.690 =  0.000
(1+  1.264)*sinh(  1.264) -   3.690 = -3.690    (1+  1.265)*sinh(  1.265) -   3.690 =5094234624.000     (1+  1.265)*sinh(  1.265) -   3.690 =  0.000

Number of iterations: 20
The start is at x = 1.26451 because (1 + x) * sinh(x) is 3.690


```

### ANALYSIS


As a result of executing the program, I found that the program correctly finds the value of x for the given function value.

### PICTURE
![Function graph]()
