#include <iostream>
#include <limits>
using namespace std;
int main(){
	int count,firstno, secondno, quotient,difference;
	quotient = 0;
	cout <<"Enter a first positive integer: ";
	cin >> firstno;
	while(1){
	if(cin.fail()){
	cin.clear();
	cin.ignore(numeric_limits < streamsize > ::max(), '\n');
	cout<< "Letters are not allowed, integers only"<<endl;
	cout<<"Enter first positive integer: ";
	cin>>firstno;
	}
	if(!cin.fail())
	break;
	}

	if(firstno<0){
	cin.clear();
	cin.ignore(numeric_limits < streamsize > ::max(), '\n');
	cout<< "You have to enter a positive integer only"<<endl;
	cout<<"Enter first positive integer: ";
	cin>>firstno;
	}
	
	cout <<"Enter a second positive integer: ";
	cin >> secondno;
	while(1){
	if(cin.fail()){
	cin.clear();
	cin.ignore(numeric_limits < streamsize > ::max(), '\n');
	cout<< "Letters are not allowed, integers only"<<endl;
	cout<<"Enter second positive integer: ";
	cin>>secondno;
	}
	if(!cin.fail())
	break;
	}
	if(secondno<0){
	cin.clear();
	cin.ignore(numeric_limits < streamsize > ::max(), '\n');
	cout<< "You have to enter a positive integer only"<<endl;
	cout<<"Enter second positive integer: ";
	cin>>secondno;
	}
	if(secondno==0){
	cin.clear();
	cin.ignore(numeric_limits < streamsize > ::max(), '\n');
	cout<< "Number Zero/0 is not allowed to be a divisor"<<endl;
	cout<<"Enter second positive integer: ";
	cin>>secondno;
	}
	
	quotient=firstno/secondno;
	for (count=0; count<quotient; count++)	{
		
		cout<<firstno;	
		cout<<" - "<<secondno<<endl;
		firstno=firstno-secondno;
	}
	cout<<" = "<< firstno<<endl;
	cout<<"Quotient: "<<quotient<<endl;
	cout<<"Remainder: "<<firstno%secondno;
return 0;
}
