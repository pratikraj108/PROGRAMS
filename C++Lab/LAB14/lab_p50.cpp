//WAP to create a file "Number.txt", read N numbers from user and write into the file. next read number from 
//this file and write into a file "even.txt" if number is even and write into a file "odd.txt" if number is odd.
#include <fstream>
#include <iostream>
using namespace std;

main(){
    fstream f1,f2,f3;
    f1.open("Number.txt",ios::out);
    int N,x;
    cout<<"Enter total number count: ";
    cin>>N;
    for(int i=1;i<=N;i++){
        cout<<"Enter number\n";
        cin>>x;
        f1<<x<<endl;
    }
    f1.close();
    f1.open("Number.txt",ios::in);
    f2.open("even.txt",ios::out);
    f3.open("odd.txt",ios::out);
    while(!f1.eof()){
        f1>>x;
        if(x%2==0){
            f2<<x<<endl;
        }else{
            f3<<x<<endl;
        }
    }
    f1.close();
    f2.close();
    f3.close();

    f2.open("even.txt",ios::in);
    while(!f2.eof()){
        f2>>x;
        cout<<x<<endl;
    }
    f2.close();

    f3.open("odd.txt",ios::in);
    while(!f3.eof()){
        f3>>x;
        cout<<x<<endl;
    }
    f3.close();
}