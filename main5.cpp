//BUBBLE SORTING AN INTEGER ARRAY

#include <iostream>
using namespace std;                   
 
int main()
{
    int numbers[] = {10,5,3,7,6,9,8,4,2,1};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i -1; j++)
        {
        if(numbers[j]>numbers[j + 1])
        {
        temp = numbers[j];
        numbers[j]= numbers[j+1];
        numbers[j+1]= temp;
        }
        }
        }
        for( int y=0; y< size;y++)
        {
            cout << numbers[y] << " ";
        }
        return 0;
        }