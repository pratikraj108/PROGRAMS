/*Spice Hut is a tiffin service provider which home delivers dinner to their customers – Occasional customers and Regular customers.
Write a C++ program to implement classes as per the following description.

class Customer
private data member: customer_name
public data member:bill_amount, bill_id
member functions:
constructor:Customer(customer_name)
pure virtual function:calculate_bill_mount()
getter method for customer_name only

class Ocassional_Customer
private data member: distance_in_kms, counter(static)
member functions:
constructor:Customer(customer_name,distance_in_kms)
validate_distance_in_kms()
calculate_bill_mount()
getter method for  distance_in_kms
Programming Rules for Ocassional_Customer:
1. Initialize static variable counter to 1000
2.Inside the constructor, auto-generate bill_id starting from 1001 prefixed by "O"
3. validate_distance_in_kms(): Validate distance in kms, Delivery distance in kms should be between 1 and 5 (both inclusive), If so, return true. Else, return false
4.Delivery charge in Rs.
	Between 1 and 2(both inclusive)			Rs. 5 per km
	Between 2 and 5(excluding 2,including 5)	Rs. 7.5 per km
5.calculate_bill_amount(): Calculate total bill amount
				Validate distance in kms
				If valid, compute bill amount based on details mentioned below
					Occasional customers can order only one tiffin per person
					Cost/tiffin is Rs. 50
					Delivery charges based on distance is as mentioned in the table
					Bill amount includes tiffin cost and delivery charge
					Set attribute, bill_amount with the computed bill amount value and return it
				If invalid, set attribute, bill_amount as -1 and return it
class Regular_Customer
private data member: no_of_tiffin, counter(static)
member functions:
constructor:Customer(customer_name,no_of_tiffin)
validate_no_of_tiffin()
calculate_bill_mount()
getter method for  no_of_tiffin

Programming Rules for Regular_Customer:
1.Initialize static variable counter to 100
2.Inside the constructor, auto-generate bill_id starting from 101 prefixed by "R"
3.validate_no_of_tiffin(): Validate number of tiffins. Regular customer can order a min of 1 and a max of 7 tiffins. If value of no_of_tiffins is valid, return true. Else, return false
4.calculate_bill_amount(): Calculate weekly bill amount.
				Validate number of tiffins
				If valid, compute bill amount based on details mentioned below
					Cost/tiffin is Rs. 50
					The order is applicable for all the 7 days of a week
					Compute the bill amount based on cost/tiffin, number of tiffins and number of days
					Set attribute, bill_amount with the computed bill amount value and return it
				If invalid, set attribute, bill_amount as -1 and return it

For testing:
	Create objects of OccasionalCustomer and RegularCustomer classes 
	Invoke calculate_bill_amount() on OccasionalCustomer and RegularCustomer objects
	Display the details of the customer*/
#include<iostream>
#include<string>
using namespace std;
class customer{
    string customer_name;
    public:
    int bill_amount;
    string bill_id;
    customer(string customer_name){
        this->customer_name=customer_name;
    }
    virtual int calculate_bill_amount()=0;
    string get_customer_name(){
        return customer_name;
    }
};
class Ocassional_customer:public customer{
    int distance_in_kms;
    static int counter;
    public:
    Ocassional_customer(string customer_name,int distance_in_kms):customer(customer_name){
        this->distance_in_kms=distance_in_kms;
        counter++;
        bill_id="O"+to_string(counter);
	}
	bool validate_distance_in_kms(){
		if(distance_in_kms>=1 && distance_in_kms<=5){
			return true;
		}
		else{
			return false;
		}
	}
	int calculate_bill_amount(){
		if(validate_distance_in_kms()){
			bill_amount=50+(distance_in_kms<=2?5*distance_in_kms:7.5*distance_in_kms);
			return bill_amount;
		}
		else{
			bill_amount=-1;
			return bill_amount;
		}
	}
	int get_distance_in_kms(){
		return distance_in_kms;
	}
};	
int Ocassional_customer::counter=1000;
class Regular_customer:public customer{
	int no_of_tiffin;
	static int counter;
	public:
	Regular_customer(string customer_name,int no_of_tiffin):customer(customer_name){
		this->no_of_tiffin=no_of_tiffin;
		counter++;
		bill_id="R"+to_string(counter);
	}
	bool validate_no_of_tiffin(){
		if(no_of_tiffin>=1 && no_of_tiffin<=7){
			return true;
		}
		else{
			return false;
		}
	}
	int calculate_bill_amount(){
		if(validate_no_of_tiffin()){
			bill_amount=50*no_of_tiffin*7;
			return bill_amount;
		}
		else{
			bill_amount=-1;
			return bill_amount;
		}
	}
	int get_no_of_tiffin(){
		return no_of_tiffin;
	}
};
int Regular_customer::counter=100;
int main(){
	Ocassional_customer o1("Pratik",2);
	Regular_customer r1("Mayank",5);
	cout<<"Ocassional Customer Details"<<endl;
	cout<<"Customer Name: "<<o1.get_customer_name()<<endl;
	cout<<"Bill ID: "<<o1.bill_id<<endl;
	cout<<"Distance in Kms: "<<o1.get_distance_in_kms()<<endl;
	cout<<"Bill Amount: "<<o1.calculate_bill_amount()<<endl;
	cout<<"Regular Customer Details"<<endl;
	cout<<"Customer Name: "<<r1.get_customer_name()<<endl;
	cout<<"Bill ID: "<<r1.bill_id<<endl;
	cout<<"No of Tiffins: "<<r1.get_no_of_tiffin()<<endl;
	cout<<"Bill Amount: "<<r1.calculate_bill_amount()<<endl;
	return 0;
}
