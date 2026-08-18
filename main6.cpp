// ENTERING USER BASED DATA IN AN ARRAY

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string foods[5];
  int size = sizeof(foods)/sizeof(foods[0]);

  for(int i=0; i<size; i++)
  { 
    cout << "enter the name of your favourite food #" << i+1 <<": ";
    getline(cin, foods[i]);
  }
   for(int i= 0; i<size; i++)
   {
   cout << "Your #" << i+1 << " favourite foods are - " << foods[i] << '\n';
   }





return 0;
}

 //use function .empty() to remove spaces ( more advanced maybe )