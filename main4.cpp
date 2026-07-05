// TAKE AN ARRAY OF INTEGERS 1-10 AND FIND THEIR INDEX USING 2 FUNCTIONS - MAIN AND GETINDEX AND PRINT IT BASED ON USER INPUT

#include <iostream>
using namespace std;  

int getIndex(int size,int target,int array[])
{
    for(int i=0; i< size ;i++)
{
    if(array[i] == target)
    {
        return i;
    }
    
}
    return -1;
}

int main()
{    
   int target;
   int size;
   int index;
   int array[]= {1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 };
 
   size = sizeof(array)/sizeof(array[0]);
   
   cout << "Enter the number whose index you want to find: " << '\n';
   cin >> target;

   index = getIndex(size,target,array);
    
   if(index != -1)
   {
   cout << "The index of the intered value is: " << index <<'\n';
}
   else
    {
        cout << "Number isnt part of the array";
    }

   return 0;
}