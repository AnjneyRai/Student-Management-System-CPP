#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks ;
    for(int i =0; i< 5; i++)
    { 
    cout << "Enter mark " << i +1 << ": " ;
    cin >> marks[i];
    }
    for(int i= 0; i< marks.size(); i++)
    {
        cout << marks[i] << '\n';
    }

    return 0;
}