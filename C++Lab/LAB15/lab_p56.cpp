//wap to count all vowels and consonants in a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

main(){
    int v=0,c=0;
    char ch;
    fstream f;
    f.open("file.txt",ios::in);
    while(!f.eof()){
        f.get(ch);
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                v++;
            }
            else{
                c++;
            }
        }
    }
    cout<<"No of vowels: "<<v<<endl;
    cout<<"No of consonants: "<<c<<endl;
    f.close();
}