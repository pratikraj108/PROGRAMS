//WAP to count characters, words and lines in a file..
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

main(){
    int c=0,w=0,l=0;
    char ch;
    fstream f;
    f.open("file.txt",ios::in);
    while(!f.eof()){
        f.get(ch);
        c++;
        if(ch==' '||ch=='\n'){
            w++;
        }
        if(ch=='\n'){
            l++;
        }
    }
    cout<<"No of characters: "<<c<<endl;
    cout<<"No of words: "<<(w+1)<<endl;
    cout<<"No of lines: "<<(l+1)<<endl;
    f.close();
}
