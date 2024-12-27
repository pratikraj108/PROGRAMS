// WAP to count all prime numbers in the file "Number.txt", also display the prime number.
#include <fstream>
#include <iostream>
using namespace std;

main(){
    fstream f1;
    f1.open("Number.txt",ios::in);
    int x;
    int count=0;
    while(!f1.eof()){
        f1>>x;
        if(x==2){
            count++;
        }else if(x>2){
            int flag=0;
            for(int i=2;i<x;i++){
                if(x%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                count++;
            }
        }
    }
    cout<<"Total prime numbers: "<<count;
    f1.close();
} 