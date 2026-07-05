#include <iostream>
using namespace std;
 int main()
 {
    string names[] = {"Anjney", "Saksham", "Suaysh", "Aryan", "Avnish", "Yash", "Ashirwad", "Anshuman"};
    for(int i=0; i< sizeof(names)/sizeof(string) ;i++)
    { 
        cout << names[i] << '\n';
        

    }
    return 0;
 }