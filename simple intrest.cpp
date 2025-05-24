// simple_interest = (P * T * R) / 100 

#include<iostream>
using namespace std;
float simple_intrest(int p,int r,int t)
{
    cout<<"enter the value of principle ammount : ";
	cin>>p;
	cout<<"enter the value of rate of intrest  : ";
	cin>>r;
	cout<<"enter the duration of time : ";
	cin>>t;
	return (p*r*t)/100;
}
int main()
{
	float SI;
	int p,r,t ;
	SI=simple_intrest(p,r,t);
	cout<<SI;
	return 0;
}
