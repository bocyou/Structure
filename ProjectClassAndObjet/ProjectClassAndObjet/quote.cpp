//引用的概念
/* int a;
int &ra=a; 定义引用ra，也就是a的别名
*/
#include <iostream>
void main ()
{
	int a,b=5;
	int &ra=a;
	a=18;
	cout<<a<<endl;
	cout<<ra<<endl;//等价于上一行的语句
	cout<<&a<<endl;//输出变量a所占的存储单元
	cout<<&ra<<endl;//等价于上一行的语句
	ra=b；
}
void swap (int &p1,int &p2)//将引用作为函数的参数，交换两个数
{
	int p;
	p=p1;
	p1=p2;
	p2=p;
}
void pswap(int *p1,int *p2)//间接的通过传入的实际变量地址
{
p=*p1;
*p1=*p2;
*p2=p;
	}

#include <iostream>
main()
{
int a=10;b=15;
swap(a,b);//直接传入ab的值
cout<<a<<b<<endl;
pswap(&a,&b);//传入的是ab的地址
cout<<a<<b<<endl;
	}