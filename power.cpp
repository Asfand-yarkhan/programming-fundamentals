#include<iostream>
using namespace std;
int power(int num, int x)
{
	if(x==0)
	{
		return 1;
	}
	else if(x==1)
	{
		return num;
	}
	else 
	{
		return num * power( num, x-1);
	}
	
}
int main()
{
	int a,b;
	cout<<"ENTER THE NUMBER: "<<endl;
	cin>>a;
	cout<<"ENTER THE POWER: "<<endl;
	cin>>b;
	cout<<endl;
	cout<<a<<"  ^ "<<b<<" = "<<power(a,b);
	return 0;
}
