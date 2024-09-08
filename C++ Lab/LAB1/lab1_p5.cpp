#include<iostream>
using namespace std;
 main()
{
	int n,x,rev=0;
	cout<<"Enter no. to check\n";
	cin>>n;
	x=n;
	while(n>0){
		rev=(rev*10)+n%10;
		n=n/10;
	}
	if(rev==x)
	cout<<"Palindrome"<<endl;
	else
	cout<<"Not Palindrome";
	return 0;
}
