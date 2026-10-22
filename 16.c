#include <stdio.h>
int main()
{

float f = 2.13;
void *p = &f;
printf("%.2f",*(float *)p);

return 0;
}