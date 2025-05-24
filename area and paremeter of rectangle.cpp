#include<iostream>
using namespace std;
int main()
{
	float l,b,paremeter ,area;
	cout<<"enter the length in centimeter ";
	cin>>l;
	cout<<"enter the size of breadth in centimeter ";
	cin>>b;
	area=l*b;
	paremeter = 2*(l+b);
	cout<<"area of rectangle is "<<area<<" cm x cm \n";
	cout<<"paremeter of rectangle is "<<paremeter<<" cm x cm";
}
