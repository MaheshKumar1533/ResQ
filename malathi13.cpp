#include<iostream>
using namespace std;
class myclass
{
	private:
	int num1;
	int num2;
	public:
	myclass(int a,int b)
	{
		a=num1;
		b=num2;
	}
	void swap(myclass &other)
	{
		swap(num1,other.num2);
		swap(num2,other.num2);
	}
	void display()
	{
		cout<<"num1:"<<num1", num2:"<<num2<<endl;
	}
};
int main()
{
myclass obj1(10,20);
myclass obj2(30,40);
cout<<"before swapping:"<<endl;
obj1.display();
obj2.display();
obj1.swap(obj2);
cout<<"after swapping:"<<endl;
obj1.display();
obj2.display();
return 0;
}
