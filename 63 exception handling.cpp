#include<iostream>
using namespace std;
int main()
{

try{
	int num1;
	cout<<"enter the 1st number..\n";
	cin>>num1;
	int num2;
	cout<<"enter the 2nd number..\n";
	cin>>num2;
	if(num2==0) //if condition satiesfies below code doesn't execute..//
		throw 0;
	cout<<num1/num2<<endl;
}catch(int x)  //catch(...) is used for any exception instead of catch(int x) for only integer exception..//
{
	cout<<"cant divide by"<<x<<endl; // x is the value after the throw..i.e is zero..//
}
}
