#include <iostream>
#include <limits>
using namespace std;

int main(){
	int i, number,ending,start,count, sum=0;
	cout << "Enter a starting number of range: ";
	cin >> start;
	cout << "Enter ending number of range: ";
	cin >> ending;
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
