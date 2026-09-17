#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char name[] = "Anjney";
    char surname[] = "Rai";
    int s = strlen(name);

    for(int i =0;surname[i]!='\0';i++,s++)
    {
       name[s]= surname[i];
    }
    name[s] = '\0';
    printf("%s", name);
    return 0;

}
