#include<bits/stdc++.h>
using namespace std;
int gcd_hcf(int a, int b)
{
	int res=min(a,b);
	while (res>1)
	{
	if (a % res == 0 && b % res == 0)
            break;
        res--;	
	}
	return res;
}
int main()
{
	int a=12,b=16;
	int Gcd=gcd_hcf(a,b);
	cout<<Gcd;
	return 0;
}
