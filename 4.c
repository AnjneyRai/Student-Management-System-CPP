#include <stdio.h>
int sum(int, int);
int main()
{  
   int a=10, b=20,s;
   s= sum(a,b);
   printf("Sum is: %d", sum);
   return 0;
}
int sum(int x,int y)
{
   int sum;
   sum = x+y;
   return sum;
}