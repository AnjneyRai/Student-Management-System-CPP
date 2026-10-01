//FINDING SUM OF TWO NUMBERS USING CALL BY REFERENCE
#include <stdio.h>
int sum(int *, int *);
int main()
{
    int n;int m;
    printf("Enter the numbers : ");
    scanf("%d %d", &n,&m);
    printf("The sum of the numbers is : %d", sum(&n,&m));
    return 0;
}
int sum(int *a, int *b)
{
   
   int s = (*a)+(*b);
   return s;
}