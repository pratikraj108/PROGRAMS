// WAP to create a 1-D array dynamically using condtuctor and destructor. Also display the array elements.
#include<iostream>
using namespace std;
class Array{
    int *ptr,size;
    public:
    Array(int s);
    ~Array();
    void input();
    void display();
};
Array::Array(int s){
    // cout<<"Enter the size of array:\n";
    // cin>>size;
    size=s;
    ptr=new int [size];
}
void Array::input(){
    cout<<"\nEnter elements:\n";
    for(int i=0;i<size;i++){
        cin>>ptr[i];
    }
}
void Array::display(){
    cout<<"Array element are\n";
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<"\t";
    }
}
Array::~Array(){
    delete[]ptr;
    ptr=NULL;
}
main(){
    Array a1(5);
    Array a2(3);
    a1.input();
    a1.display();
    a2.input();
    a2.display();
}
