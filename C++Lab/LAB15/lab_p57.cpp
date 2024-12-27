//WAP to copy content of one file into another in the following manner:
//1. copy Uppercase alpahbet in lower case and vice versa.
//2. copy rest of the content as it is,

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

  main(){
    fstream f,f1;
    f.open("abc.txt",ios::out);
    char ch;
    while((ch=getchar())!='q'){
        f.put(ch);
    }
    f.close();
    f.open("abc.txt",ios::in);
    f1.open("xyz.txt",ios::out);
    while(f){
        f.get(ch);
        if(ch>='a'&&ch<='z'){
            ch=ch-32;
            f1.put(ch);
        }
        else if(ch>='A'&&ch<='Z'){
            ch=ch+32;
            f1.put(ch);
        }
        else{
            f1.put(ch);
        }
    }
    f.close();
    f1.close();
  }