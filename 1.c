//wap to find length if a string
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char name[] = "Anjney"; char def[]=" is the goat.";
    int n = strlen(name);
    printf("%d", n);
    strcat(name, def);
    printf("\n%s", name);

    strrev(name);
    printf("\n%s", name);

    strcpy(name, def); //2nd will go in 1st (src, des) //des to src
    printf("\n%s", name);
    printf("\n%s", def);

    int res = strcmp(name, def);
    if(res==0)
    printf("\nBoth string are same\n");

    else if(res > 0)
    printf("String i is greater\n");

    else
    printf("String 2 is greater");

    return 0;
}