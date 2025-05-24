#include<iostream>
using namespace std;
int vowel_or_consonant(char ch)
{
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	cout<<"\n charcter is vovel";
	else
	cout<<"\n charcter is consonant";
}
int main ()
{
	char ch;
	cout<<"enter character you want to check :";
	cin>>ch;
	vowel_or_consonant(ch);
}
