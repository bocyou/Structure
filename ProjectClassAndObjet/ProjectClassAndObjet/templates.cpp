#include <iostream>
template<class T> T Max(T a,T b){
	if (a>b) return a;
		else return b;
		}
		
main()
{
	int a=10,b=15;
	float x=3.5,y=2.5;
	double p=4.6,q=5.8;
	char c1='d',c2='D';
	cout<<Max(a,b);
	cout<<Max(x,y);
	cout<<Max(p,q);
	cout<<Max(c1,c2);
	}