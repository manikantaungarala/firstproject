#include<iostream>
using namespace std;
class student
{
	private:
		int a,b;
	public:
		student(int x=5,int y=6)
		{
			
		}

    void display()
   {
	    cout<<"the value a="<<a;
      	cout<<"the value b="<<a;
   }
};
int main()
{
	student s1;
	student s2(11,22);
    s1.display();
    s2.display();
    return 0;
}
