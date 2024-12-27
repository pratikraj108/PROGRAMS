//WAP to count alphabet, digits and special character in  file .
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

main(){
    int a=0,d=0,s=0;
    char ch;
    fstream f;
    f.open("file.txt",ios::in);
    while(!f.eof()){
        f.get(ch);
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            a++;
        }
        else if(ch>='0'&&ch<='9'){
            d++;
        }
        else{
            s++;
        }
    }
    cout<<"No of alphabets: "<<a<<endl;
    cout<<"No of digits: "<<d<<endl;
    cout<<"No of special characters: "<<s<<endl;
    f.close();
}
