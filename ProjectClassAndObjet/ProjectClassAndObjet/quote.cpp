//���õĸ���
/* int a;
int &ra=a; ��������ra��Ҳ����a�ı���
*/
#include <iostream>
void main ()
{
	int a,b=5;
	int &ra=a;
	a=18;
	cout<<a<<endl;
	cout<<ra<<endl;//�ȼ�����һ�е����
	cout<<&a<<endl;//�������a��ռ�Ĵ洢��Ԫ
	cout<<&ra<<endl;//�ȼ�����һ�е����
	ra=b��
}
void swap (int &p1,int &p2)//��������Ϊ�����Ĳ���������������
{
	int p;
	p=p1;
	p1=p2;
	p2=p;
}
void pswap(int *p1,int *p2)//��ӵ�ͨ�������ʵ�ʱ�����ַ
{
p=*p1;
*p1=*p2;
*p2=p;
	}

#include <iostream>
main()
{
int a=10;b=15;
swap(a,b);//ֱ�Ӵ���ab��ֵ
cout<<a<<b<<endl;
pswap(&a,&b);//�������ab�ĵ�ַ
cout<<a<<b<<endl;
	}