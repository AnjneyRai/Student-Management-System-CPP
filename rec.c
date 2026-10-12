#include <stdio.h>
void rec(int, int);
int main()
{
    int n=10; int pq=1;
    rec(10,1);
    return 0;
}
void rec(int a, int p)
{
    if(a==1)
    {
        printf("Factorial is %d",p);
        return;
    }
    p = p*a;
    rec(a-1,p);
}