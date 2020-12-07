#include <iostream>
#include <limits>
using namespace std;
int main(){
	int seriesno, i = 1, output = 0;
	cout<<"Enter number of series: ";
	cin>>seriesno;
	while(1){
	if(cin.fail()){
	cin.clear();
	cin.ignore(numeric_limits < streamsize > ::max(), '\n');
	cout<< "Letters are not allowed, numbers only"<<endl;
	cout<<"Enter number of series: ";
	cin>>seriesno;
	}
	if(!cin.fail())
	break;
}
	cout<<endl;	
	for (i=1; i<seriesno; i++)	{
		cout<<i<<" + ";
		output += i;
	}
	output+=i;
	cout<<i<<" = "<<output<<endl;
	
	
	return 0;
}
