#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char name[] = "Anjney";
    int j,k;
    int s=strlen(name);
    int i=s-1;
    char name2[s];
    for(j=0;j<s;j++,i--)
    {
        name2[j]= name[i];
    }
    name2[s]= '\0';
printf("%s", name2);

    return 0;
}