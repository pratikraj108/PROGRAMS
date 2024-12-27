//Write a c++ program to define a class for defining the member fxn inside the class;

#include<iostream>
using namespace std;
class sample{
	        private:
			         int a,b;
            public:
			         void getdata();
		             void display();
            };
    void sample::getdata()   // (::)scope resolution output
    {
     	cout<<"Enter a,b\n";
    	cin>>a>>b;	
	}
    void sample::display()
    {
    		cout<<"\na="<<a;
			cout<<"\nb="<<b;
	}
    main(){
    	sample s1;
    	s1.getdata();
    	s1.display();
	return 0;		 
}
