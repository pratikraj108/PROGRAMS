////WAP ro create a file,read student details from user and write it to file(by using open function)
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

main(){
    ofstream fout;
    fout.open("student.txt");
    string name;
    int roll;
    double marks;
    char grade;
    cout<<"Enter student name: ";
    getline(cin,name);

    cout<<"Enter student roll number: ";
    cin>>roll;
    cout<<"Enter student marks: ";
    cin>>marks;
    cout<<"Enter student grade: ";
    cin>>grade;

    fout<<"Name:"<<name<<endl;
    fout<<"Roll_No:"<<roll<<endl;
    fout<<"Marks:"<<marks<<endl;
    fout<<"Grade:"<<grade<<endl;
    fout.close();

    ifstream fin;
    fin.open("student.txt",ios::in);
    if(!fin){
        exit(1);
    }
    getline(fin,name);
    fin>>roll;
    fin>>marks;
    fin>>grade;

    cout<<"Name:"<<name<<endl;
    cout<<"Roll_No:"<<roll<<endl;
    cout<<"Marks:"<<marks<<endl;
    cout<<"Grade:"<<grade<<endl;
    fin.close();
}    