//WAP to search the student details in  file "student.txt" .
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("student.txt");
    string name;
    int rollNumber;
    int marks;
    string searchName;
    cout << "Enter the name of the student to search: ";
    cin >> searchName;
    bool found = false;
    while (fin >> name >> rollNumber >> marks)
    {
        if (name == searchName)
        {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Student not found!" << endl;
    }
    fin.close();
    return 0;
}