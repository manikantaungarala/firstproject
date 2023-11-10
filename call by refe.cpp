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
	int z,w;
	cout<<"enter x value";
	cin>>z;
	cout<<"enter y value";
	cin>>w;
	call(z,w);
	cout<<"z="<<w<<endl;
	cout<<"w="<<z<<endl;
	return 0;
}
