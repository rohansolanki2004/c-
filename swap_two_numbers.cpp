#include<iostream>
using namespace std;
int main()
{
	int a, b ,c;
	cout<<"enter the value of 1st variable";
	cin>>a;
	cout<<"enter the value of 2nd variable";
	cin>>b;
	
	//swapping with 3rd variable 
    /*
	c=b;
	b=a;
	a=c;
	*/
	
	/*swapping without 3rd variable */
     a=a+b;
     b=a-b;
     a=a-b;
	cout<<"now the value of 1st variable is "<<a<<"\n";
	cout<<"now the value of 2nd variable is "<<b<<"\n";
}
