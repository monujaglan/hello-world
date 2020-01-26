# LABORATORY WORK NO.1. - TAYLOR SERIES - REPORT 

## THEORY
In mathematics, a Taylor series is a representation of a function as an infinite sum of terms that are calculated from the values of the function's 
derivatives at a single point.[1][2][3]
In the West, the subject was formulated by the Scottish mathematician James Gregory and formally introduced by the English mathematician Brook Taylor in 1715. 
If the Taylor series is centered at zero, then that series is also called a Maclaurin series, after the Scottish mathematician Colin Maclaurin, 
who made extensive use of this special case of Taylor series in the 18th century.
A function can be approximated by using a finite number of terms of its Taylor series. Taylor's theorem gives quantitative estimates 
on the error introduced by the use of such an approximation. The polynomial formed by taking some initial terms of the Taylor series 
is called a Taylor polynomial. The Taylor series of a function is the limit of that function's Taylor polynomials as the degree increases,
provided that the limit exists. A function may not be equal to its Taylor series, even if its Taylor series converges at every point.
A function that is equal to its Taylor series in an open interval (or a disc in the complex plane) is known as an analytic function 
in that interval.

### CODE
```
#include<stdio.h>
#include<math.h>
void main()
{
 long double x,y,a,S;
 int k=0;
 printf("Enter Value For X\n");
 scanf("%Lf",&x); 
 y = sinh(x);
 printf("y=sinh(%.2Lf)=%.2Lf\n",x,y);

 a = (1)*pow(x,2*k+1)/(1.);
 S = a;
 printf("%.2Lf\t%8.2Lf\t%8.2Lf\n",x,a,S);

while (k<500)
 {
  if (k == 0)
   printf("a0 = %Le\tS0 =%.2Lf\n",a,S);
  k++;
  a = a * (1) *x*x / ((2*k)*(2*k+1));
  S += a;
  if (k == 499)
  printf("a499 = %Le\tS499 =%.2Lf\n",a,S);
 }
  printf("a500 = %Le\tS500 =%.2Lf\n",a,S);

 printf("\n");
 printf("\t\t          500\n");
 printf("\t\t         ----\n");
 printf("\t\t         \\\t\t          2(n)+1\n");
 printf("\t\t          \\\t\t      (x)\n");
 printf("sinh(x)=\t\t|\t       ----------------\n");
 printf("\t\t          /\t\t   (2(n)+1)!\n");
 printf("\t\t         /\n");
 printf("\t\t         ----\n");
 printf("\t\t          k=0\n");

 printf("\n");
 printf("\t\t\tx\n");
 printf("R=\t\t   -----------\n");
 printf("\t\t\tk\n");
}


```
### COMMENTS ABOUT CODE 

I use  long double refers to a floating-point data type that is often more precise than double-precision 
though the language standard only requires it to be at least as precise as double. As with C's other floating-point types.

### RESULT
```
Enter Value For X
2.05
y=sinh(2.05)=3.82
2.05        2.05            2.05
a0 = 2.050000e+00       S0 =2.05
a499 = 6.878013e-2254   S499 =3.82
a500 = 2.887597e-2259   S500 =3.82

                          500
                         ----
                         \                        2(n)+1
                          \                   (x)
sinh(x)=                |              ----------------
                          /                (2(n)+1)!
                         /
                         ----
                          k=0

                        x
R=                 -----------
                        k



```

### ANALYSIS

When I executed the code, I found that the results obtained with the Taylor series match the estimated value of the function.  

### PICTURE
![Function graph]()
