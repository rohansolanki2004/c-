#include<iostream>
using namespace std;
float multiply_two_floating_point_number(float x,float y)
{
	 return x * y;
}

int main()
{
	float a=3.4,b=6.8,c;
	c=multiply_two_floating_point_number(a,b);
	cout<<c;
	return 0;
}
