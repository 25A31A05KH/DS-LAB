#include<iostream>
using namespace std;
class student
{
	public:
		int rno,mark;
		
	public:
    	void read ()
    	{
    		cout<<"enter rno and marks";
    		cin>> rno >> mark;
		}
		void display()
		{
			cout<<"rno is "<<rno<<endl<<"mark is "<<mark;
		}
		
};

int main()
{
	student s1;
	s1.read();
	s1.display();
}
