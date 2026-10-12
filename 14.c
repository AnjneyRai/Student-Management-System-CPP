//linear search
#include <stdio.h>
int main()
{   int i;
    int arr[10]= {1,3,37,46,1,54,7,3,9,10};
    printf("Enter number to search : ");
    scanf("%d", &i);

    for(int j=0;j<10;j++)
    {
        if(arr[j] == i)
        {
            printf("\n%d", j+1);
            return 0;
        }
    }
    printf("\nNot Found");
    return 0;
}