//默认参数
#include <iostream>
void sum(int num=0)
{
	int i,s=0;
	for(i=0;i<num;i++) s+=i;
	cout<<"sum is"<<s<<endl;
	
	}
main()
{sum();
	sum(10);
	}
	
//多个参数中默认参数的设置，需要遵循从右向左的顺序。
//void f2(int x,float y=0 ,int z=0)