#include<stdio.h>
#include <math.h>
main()
{
  double a, b, c, s, area;

  printf("Enter sides of a triangle\n");
  scanf("%lf%lf%lf", &a, &b, &c);

  s = sqrt(a+b+c)/2; 

  area =(s*(s-a)*(s-b)*(s-c));

  printf("Area of the triangle = %.2lf\n", area);
}
