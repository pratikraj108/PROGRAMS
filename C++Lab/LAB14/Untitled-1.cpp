#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

// Employee structure
struct Employee {
    string name;
    int id;
    string department;
};

// Function to add a record
void addEmployee(const string& filename) {
    Employee emp;
    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, emp.name);
    cout << "Enter Employee ID: ";
    cin >> emp.id;
    cout << "Enter Employee Department: ";
    cin.ignore();
    getline(cin, emp.department);

    ofstream outFile(filename, ios::app);
    if (outFile.is_open()) {
        outFile << emp.name << "," << emp.id << "," << emp.department << endl;
        outFile.close();
        cout << "Employee added successfully!" << endl;
    } else {
        cerr << "Error opening file for writing!" << endl;
    }
}

// Function to display all records
void displayEmployees(const string& filename) {
    ifstream inFile(filename);
    if (inFile.is_open()) {
        string line;
        cout << "\nEmployee Records:\n";
        while (getline(inFile, line)) {
            stringstream ss(line);
            string name, id, department;
            getline(ss, name, ',');
            getline(ss, id, ',');
            getline(ss, department, ',');
            cout << "Name: " << name << ", ID: " << id << ", Department: " << department << endl;
        }
        inFile.close();
    } else {
        cerr << "Error opening file for reading!" << endl;
    }
}

// Function to search for an employee by ID
void searchEmployee(const string& filename, int searchId) {
    ifstream inFile(filename);
    if (inFile.is_open()) {
        string line;
        bool found = false;
        while (getline(inFile, line)) {
            stringstream ss(line);
            string name, idStr, department;
            getline(ss, name, ',');
            getline(ss, idStr, ',');
            getline(ss, department, ',');
            int id = stoi(idStr);
            if (id == searchId) {
                cout << "Employee Found:\n";
                cout << "Name: " << name << ", ID: " << id << ", Department: " << department << endl;
                found = true;
                break;
            }
        }
        inFile.close();
        if (!found) {
            cout << "Employee with ID " << searchId << " not found!" << endl;
        }
    } else {
        cerr << "Error opening file for reading!" << endl;
    }
}

int main() {
    const string filename = "employees.txt";
    int choice;

    do {
        cout << "\nEmployee Management System\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee(filename);
                break;
            case 2:
                displayEmployees(filename);
                break;
            case 3: {
                int searchId;
                cout << "Enter Employee ID to search: ";
                cin >> searchId;
                searchEmployee(filename, searchId);
                break;
            }
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
