#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};int rarr[5];
    int i = 0;int y =5;int j=4;

    while(i<5 && j>=0)
    {
      rarr[i] = arr[j];

      i++ ; j-- ;
    }
int k=0;
 while(k<5)
 {
    cout << rarr[k] <<" ";
    k++;
 }

 return 0;
}