#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student
{
 string name;
 int rollNo;
 float marks;   
};

int main()
{
    vector<Student> students;
    int choice;

    do
    {
    cout << "================================" <<'\n';
    cout << "   STUDENT MANAGEMENT SYSTEM" << '\n';
    cout << "================================" <<'\n';

    cout << "1. Add Student" << '\n';
    cout << "2. Display Students"<< '\n';
    cout << "3. Search Students"<< '\n';
    cout << "4. Update Marks"<< '\n';
    cout << "5. Delete Student" << '\n';
    cout << "6. Show Class Average" << '\n';
    cout << "7. Show Topper" << '\n';
    cout << "8. Assign Grades" << '\n';
    cout << "9. Exit" << '\n';

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
      case 1:
      {
         cout << "Add Student Selected" << '\n';

         Student temp;
         cout << "Enter student name: ";
         cin.ignore();
         getline(cin, temp.name);

         cout <<'\n' << "Enter student's roll no: " ;
         cin >> temp.rollNo; 

         cout << '\n' << "Enter student's marks: ";
         cin >> temp.marks;

         students.push_back(temp);
         cout << "Student added successfully!" << '\n';

         break;
    }
          
      case 2:
      {
         cout << "===== Display Students Selected =====" << '\n';

          if(students.size() == 0)
          {
            cout << "No students found" << '\n';
          }
          else
          {
            for (int i  = 0; i < students.size(); i++)
            {
                cout << "Name: " << students[i].name << '\n';
                cout << "Roll No: " << students[i].rollNo << '\n';
                cout << "Marks: " << students[i].marks << '\n';
            }
          }
          break; 
        }
          
      case 3:
         {

          bool match = false;
          int temproll;
          cout << "Enter roll no: " << '\n';
          cin >> temproll;

          for(int i=0; i< students.size();i++)
          {
           if (students[i].rollNo == temproll)
           {
            cout << "Name: " << students[i].name << '\n';
            cout << "Roll No: "<< students[i].rollNo << '\n';
            cout << "Marks: " << students[i].marks << '\n';
            
            match = true;

            break;
           }
          }
            if ( match == false)
            {
             cout << "Student not found";
            }          
         break;
          }

         case 4: 
          {
          int tempRoll;
          float newMarks;
          bool found = false;
          cout << "Enter the roll no of the student whose marks you want to update: ";
          cin >> tempRoll;

          for (int i=0;i<students.size();i++)
          {
          if(students[i].rollNo == tempRoll)
         { 
          cout << "Enter the new marks: " ;
          cin >> newMarks;
          cout << '\n';
          students[i].marks = newMarks;
          cout << "Marks Updated Successfully." << '\n';
          found = true;
          break;
         }
        }
          
          if(found == false)
          
          {
            cout << "Student not found." << '\n';
          }
           break;
          }

          case 5:
          {
            int tempRoll;
            bool found= false;
            cout << "Enter the roll no of the student whom you want to delete: ";
            cin >> tempRoll;
            
            for(int i=0;i < students.size();i++)
            {
            if(students[i].rollNo == tempRoll)
            {
            students.erase(students.begin() + i);
            cout << '\n' << "Student deleted." << '\n'; 
            found = true;
            break;
            }
            }
            if(found == false)
            {
              cout << "Student not found. Please enter correct roll no.";
            }
            break;
          }

      case 6:
        {
          float tempMarks;
          double sum = 0.0 ;
          double average;

        if(students.empty())
        { 
          cout << "No students found."<< '\n';
        }
          else
          {
          for(int i=0;i<students.size();i++)
          {
            tempMarks = students[i].marks;
            sum = sum + tempMarks;
          }
          average = sum/students.size();
          cout << "Average is: "<< average << '\n';
        }    break;
      } 

      case 7:
        {
      Student topper;
       if (students.empty())
        { 
          cout << "No student found." << '\n';
        }
        else
        {
        topper = students[0];
        for(int i = 0;i < students.size();i++)
        {
          if(students[i].marks > topper.marks)
          {
            topper = students[i];
          }
        }
          cout << "The toppper is: " << topper.name << '\n';
          cout << "The topper's roll no is: " << topper.rollNo << '\n';
          cout << "The topper's marks are: " << topper.marks << '\n';
      }
        break;
      }
      
      case 8:
      {
        if(students.empty())
        { 
          cout << "No student found." << '\n';
        }
        else
        {
        for(int i=0; i < students.size();i++)
        {
          if(students[i].marks>89)
          {
          cout << "Name: "<< students[i].name;
          cout << "Marks: " << students[i].marks;
          cout << "Grade: " << "A" << '\n';
          }
          else if(students[i].marks>79)
          { 
            cout << "Name: "<< students[i].name;
          cout << " Marks: " << students[i].marks;
            cout << " Grade: " << "B" << '\n';
          }
          else if (students[i].marks > 69)
          {
            cout << "Name: "<< students[i].name << '\n';
          cout << "Marks: " << students[i].marks << '\n';
            cout << "Grade: " << "C" << '\n';
          }
          else if (students[i].marks > 59)
          {
            cout << "Name: "<< students[i].name << '\n';
          cout << "Marks: " << students[i].marks<< '\n';
            cout << "Grade: " << "D"<< '\n';
          }
          else if (students[i].marks < 60)
          {
            cout << "Name: "<< students[i].name<< '\n';
          cout << "Marks: " << students[i].marks<< '\n';
            cout << "Grade: " << "F"<< '\n';
          }
        } 
      }
        break;
      }
        
      case 9: 
         cout << "Goodbye !!!";
         break;
        
     }}
        while(choice != 9);

    return 0;
    }