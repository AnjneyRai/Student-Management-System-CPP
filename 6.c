#include <stdio.h>
void sum(int *,int *);     //prototype of function
int main()     //calling function
{
    int a=10,b=20;
    sum(&a, &b);
    return 0;

}
void sum(int *x, int *y)
{
   int sum = *x + *y;
   printf("The sum is : %d", sum);
}