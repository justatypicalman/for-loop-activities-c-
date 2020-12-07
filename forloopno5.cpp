#include <iostream>
#include <limits>
using namespace std;
int main(){
	int length, i, prev = 0, next = 1, output;
	cout << "Enter length > ";
	cin >> length;
	while(1){
	if(cin.fail()){
	cin.clear();
	cin.ignore(numeric_limits < streamsize > ::max(), '\n');
	cout<< "Letters are not allowed, numbers only"<<endl;
	cout<<"Enter length: ";
	cin>>length;
	}
	if(!cin.fail())
	break;
	}
	cout<<"Result: ";
	for ( i = 1; i < length; i++ )	{
		if ( i <= 1 )	{
			output = i;
		}
		else	{
			output = prev + next;
			prev = next;
			next = output;
		}
      cout<<output<<", ";
	}
	output = prev + next;
	cout<<output<<endl;
return 0;
}
