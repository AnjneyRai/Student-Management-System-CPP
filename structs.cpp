#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct Student
    {
        string name;
        int rollNo;
        int marks;
    };

    Student a;

    cout << "Enter name: ";
    getline(cin, a.name);

    cout << "Enter roll no: ";
    cin >> a.rollNo;
    
    cout << "Enter marks: ";
    cin >> a.marks ;
    
    cout << "----- Student Details -----" << '\n';
    cout << "Name : " << a.name << '\n';
    cout << "Roll No : " << a.rollNo << '\n';
    cout << "Marks : " << a.marks << '\n';

    return 0;
}
