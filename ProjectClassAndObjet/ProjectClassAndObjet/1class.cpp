#include <iostream>
using std::cout;
using std::endl;
class Stack{//��ջ�ǲ���������˵��ջ�Ͷѣ�
private:
	int size, top;
	int *items;
public:
	Stack();
	~Stack();
	void Init(int s);
	void Push(int item);
	void Pop(int &item);//ע�⣺���÷������ں��������ʱ��Ż�ʹ�õ�

};
Stack::Stack(){
	size = 0;
	top = 0;
	items = NULL;

}
void Stack::Init(int s){
	if (items != NULL) delete items;//�ٴγ�ʼ����ʱ�򣬷�ֹ�ڴ�й©����ʵ��������������취���
	items = NULL; size = 0; top = 0;
	if (s <= 0){ cout << "����������"; return; }
	items = new int[s];
	if (items == NULL)	{ cout << "�ڴ治�㣬��ʼ��ʧ��"; }
	size = s;
}
void Stack::Push(int item){
	if (top >= size - 1){ cout << "ջ�������ܽ�ջ"; return; }
	items[top] = item;
	top++;
}
void Stack::Pop(int &item){
	if (top <= 0){
		cout << "ջ�գ���Ԫ�س�ջ"; return;
	}
	top--;
	item = items[top];
}
Stack::Stack(){
	if (items != NULL)delete items;
}


class Point {
private://˽�г�Ա��ֻ�ܱ�����ĳ�Ա�������ʣ������г�Ա���Ա����еĺ�������
	int x, y;
public:
	void SetPoint(int, int);//�����Ա������ʱ�򣬶Ժ��������Ĳ���������˵�������ǲ����ģ���Ҫ˵�����ƣ�������ʱ����
	void ShowPoint();
}point1, point2;//���ඨ���ʱ��ͬʱ������������
//����һ�ַ����Ǻ���ͨ�����Ķ������ʽ���� Point point1,point2;


//�����Ա������ʱ����Ҫ���������Լ��ָ���::����������Ҳ����ƥ��
void Point::SetPoint(int x1,int y1){
	x=x1;y=y1;
}
void Point::ShowPoint(){
	cout<<x<<","<<y<<endl;
}

//��������ʹ��
void test2();
void test3();

void main()
{
	/*Point p1, *p;
	p1.SetPoint(10, 15);
	p = &p1;
	p1.ShowPoint();
	p->ShowPoint();//����һ�е�ʽ�ӵ�Ч

	//��������

	Point points[5];
	for (int i = 0; i<5; i++) points[i].SetPoint(10, 20 + 10 * i);
	for (int i = 0; i<5; i++) points[i].ShowPoint();*/

	test3();
	system("pause");
}

void test2()//��������Ķ�̬����
{
	int *p1;
	p1 = new int;
	*p1 = 20;
	delete p1;

	float *p2;
	p2 = new float(10.5);
	cout << *p2;
	delete p2;

	int *p3;
	p3 = new int[10];
	for (int i = 0; i < 10; i++)	p3[i] = i + 1;
	delete[] p3;

	Point *p4;
	p4 = new Point;
	p4->SetPoint(3, 5);
	delete p4;

	Point *p5;
	p5 = new Point[10];
	for (int i = 0; i < 10; i++) p5[i].SetPoint(10, 20 + 10 * i);//(p5+i)->
	delete[] p5;

}
 
void test3(){//��ջ��Ӧ��
	Stack s;
	int item;
	s.Init(20);
	s.Push(10); s.Push(20); s.Push(5); s.Push(15);
	s.Pop(item);
	cout << item << endl;
	s.Pop(item);
	cout << item << endl;
	s.Pop(item);
	cout << item << endl;
	s.Pop(item);
	cout << item << endl;
	s.Pop(item);
}