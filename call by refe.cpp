#include<iostream>
using namespace std;
int call(int &a,int &b)
{
	a++;
	b++;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
int main()
{
	int x,y;
	cout<<"enter x value";
	cin>>x;
	cout<<"enter y value";
	cin>>y;
	call(x,y);
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	return 0;
}
