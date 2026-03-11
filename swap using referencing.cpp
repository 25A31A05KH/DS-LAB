#include<iostream>
using namespace std;
int main()
{
	int x=10,y=80;
	int p,q;
	swap(x,y);
	cout<<"x="<<"x";
	cout<<"\ny="<<"y";
}
  int swap(int&p,int&q)
 {
 	p=p+q;
 	q=p-q;
 	p=p-q;
 	return p,q;
 }
