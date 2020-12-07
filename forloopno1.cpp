#include <iostream>
#include <limits>
using namespace std;
int main(){
	int firstno, secondno, product;
	product = 0;
	
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
	
	for (int count=1; count<secondno; count++)	{
		cout<<firstno<<" + ";
		product+=firstno;
	}
	product+=firstno;
	cout<<firstno<<" = "<<product<<endl;
return 0;
}
