#include<iostream>
#include<fstream>
using namespace std;
 main(){
    ofstream fout;
    fout.open("pratik.txt",ios::out);

    string name;
    int roll;
    int marks;
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter roll no."<<endl;
    cin>>roll;
    cout<<"Enter marks"<<endl;
    cin>>marks;

    fout<<name<<endl;
    fout<<roll<<endl;
    fout<<marks<<endl;

    fout.close();

    ifstream fin;
    fin.open("pratik.txt",ios::in);
    if(!fin){
        exit(1);
    }
    fin>>name;
    fin>>roll;
    fin>>marks;

    cout<<"Name"<<name<<endl;
    cout<<"Roll"<<roll<<endl;
    cout<<"Marks"<<marks<<endl;
    fin.close();
    
 }