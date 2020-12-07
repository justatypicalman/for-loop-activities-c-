#include <iostream>
#include <limits>
using namespace std;

int main(){
	int i, number,ending,start,count, sum=0;
	cout << "Enter a starting number of range: ";
	cin >> start;
	while(1){
	if(cin.fail()){
	cin.clear();
	cin.ignore(numeric_limits < streamsize > ::max(), '\n');
	cout<< "Letters are not allowed, numbers only"<<endl;
	cout<<"Enter a starting number of range: ";
	cin>>start;
	}
	if(!cin.fail())
	break;
	}
	cout << "Enter ending number of range: ";
	cin >> ending;
	while(1){
	if(cin.fail()){
	cin.clear();
	cin.ignore(numeric_limits < streamsize > ::max(), '\n');
	cout<< "Letters are not allowed, numbers only"<<endl;
	cout<<"Enter ending number of range: ";
	cin>>ending;
	}
	if(!cin.fail())
	break;
	}
	if (start>=ending){
	cout<< "You have to enter a bigger number than the starting number"<<endl;
	cout<<"Try again!";
	return 0;
	}
	cout<<"The Sum of Prime numbers from "<<start<<" to "<<ending<< " =";
	for(number=start;number<=ending;number++)
	{
		count=0;
		for(i=2;i<=number/2;i++){
		if(number%i==0)
		{
			count++;
			break;
		}
	}
		if(count==0 && number!=1)
		{
			sum=sum+number;
			cout << " + "<<number;
		}
		
	}
	
	cout<<" = "<<sum;
}
