//FIND SUM OF ARRAY USING FUNCTIONS
#include <stdio.h>
int sum(int *,int );
int main()
{
    int n[5]= {1,2,3,4,5};
    printf("Sum of array is %d", sum(n,5));
    return 0;
}
int sum(int arr[], int b)
{
  int i;int s=0;
  for(i=0;i<b;i++)
  {
    s = s+ arr[i];
  }
  return s;
}