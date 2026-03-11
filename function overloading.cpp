#include<iostream>
using namespace std;
int main()
{
	int a=4,b=5,c=6;
	add(a,b);
	add(a,b,c);
	return 0;
}
 add(intx,inty)
{
	return x*y;
}
 add(intx,inty,intz)
{
	return x*y*z;
}

