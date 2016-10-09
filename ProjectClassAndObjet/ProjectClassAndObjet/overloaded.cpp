int Max(int a,int b)
{
	if (a>b) return a;
		else return b;
	}

float Max(float a,float b)
{
	if (a>b) return a;
		else return b;
		}
		
int Max (int a,int b,int c)
{int t;
	if (a>b) t=a;
		else t=b;
	if(t<c) t=c;
		return t;
			}

	
#include <iostream.h>
main()
{int a=10,b=5,c=15;
	float x=15.2,y=18.5,z=10.1;
	int d;
	float f;
	d=Max(a,b);cout<<d<<endl;
	d=Max(a,b,c);cout<<d<<endl;
	f=Max(x,y);cout<<d<<endl;
	f=Max(x,y,z);cout<<d<<endl;
	}
	
	