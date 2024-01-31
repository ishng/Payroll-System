#include <iostream>
using namespace std;

int main () {
	int employeeid;
	int hoursworked;
	float hourlyRate, grosspay, taxAmount, netpay;
float TaxRate = 0.59;

	
	cout<< "Enter Employee Id: ";
	cin>>employeeid;
	cout<<"Enter Hours Worked: ";
	cin>>hoursworked;
	cout<<"Enter Hourly Rate: ";
	cin>>hourlyRate;
	
	grosspay = hoursworked*hourlyRate;
	taxAmount = grosspay*TaxRate;
cout<< "Employee Id is " <<employeeid <<endl;
cout<< "hours Worked are " <<hoursworked <<endl;
cout <<"hourly Rate is " <<hourlyRate <<endl;
cout<<"The Gross Pay is "<<grosspay<<endl;
cout<<"Tax Amount is "<<taxAmount<<endl;
cout<<"The Net Pay is "<<netpay<<endl;
	
}
