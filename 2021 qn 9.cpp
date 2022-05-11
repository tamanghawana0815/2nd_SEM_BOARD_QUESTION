//WAP showing the example of virtual function.
#include<iostream>
using namespace std;
class base{
	public:
		virtual void print()
		{
			cout<<"print base class";
		}
		void show()
		{
			cout<<"show base class ";
		}
};
class derived : public base{
	public:
		void print()
		{
			cout<<"print derived class \n";
		}
		void show()
		{
			cout<<"show derived class \n";
		}
};
int main()
{
	base *bptr;
	derived d;
	bptr= &d;
	bptr->print();
	bptr->show();
	return 0;
}
