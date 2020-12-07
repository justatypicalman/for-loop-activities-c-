#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int num, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;
	while(1){
		if(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits < streamsize > ::max(), '\n');
		cout<< "Letters are not allowed, integers only!"<<endl;
		cout<<"Enter a positive integer: ";
		cin>>num;
		}
		if(!cin.fail())
		break;
	}
	if(num<0){
	cin.clear();
	cin.ignore(numeric_limits < streamsize > ::max(), '\n');
	cout<< "Please provide a positive integer!"<<endl;
	cout<<"Enter a positive integer: ";
	cin>>num;
	}
    for(int i = 1; i <=num; ++i)
    {
		cout << factorial <<" x "<< i<<endl;
        factorial *= i;
        
    }
	cout << " = " << factorial;
    cout << "\nFactorial of " << num << " = " << factorial;    
    return 0;
}
