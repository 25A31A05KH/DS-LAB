#include<iostream>
using namespace std;
class cal
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		int sub(int a,int b)
		{
			return a-b;
		}
		int mul(int a,int b)
		{
			return a*b;
		}
		int div(int a,int b)
		{
			return a/b;
		}
		int mod(int a,int b)
		{
			return a%b;
		}
};

int main()
{
	cal ob1;
	cout<<"addition result is :"<<ob1.add(5,7)<<"\nsub result is"<<ob1.sub(10,6)<<"\n mul result is"<<ob1.mul(2,3)<<"\n div result is"<<ob1.div(6,2)<<"\n mod result is"<<ob1.mod(6,2);
}
