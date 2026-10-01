//FINDING FACTORIAL OF A NUMBER USING CALL BY REFERENCE
#include <stdio.h>
int fac(int *);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The factorial of the number is : %d", fac(&n));
    return 0;
}
int fac(int *a)
{
   int i;int f =1;int p = *a;
   for(i=0;i<*a;i++)
   {
      f = (p* f);
      p--;
   }
   return f;
}