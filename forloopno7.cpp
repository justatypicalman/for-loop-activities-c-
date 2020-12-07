#include <iostream> 
#include <cctype>
using namespace std; 

int main(){
    int i,num,sum=0;
    cout << "Enter a number: ";
    cin >> num;
       for(i=1; i<num; ++i){
       if(num%i==0)
       sum=sum+i;
	}
 
	if(sum==num){
    cout << i << " is a perfect number\n"; 
	}
	else{
    cout << i << " is not a perfect number\n";
}
return 0;
}
