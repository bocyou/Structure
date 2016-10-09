#include <iostream>
using std::cout;
using std::endl;
class Stack{//堆栈是不是我们所说的栈和堆？
private:
	int size, top;
	int *items;
public:
	Stack();
	~Stack();
	void Init(int s);
	void Push(int item);
	void Pop(int &item);//注意：引用符仅仅在函数定义的时候才会使用到

};
Stack::Stack(){
	size = 0;
	top = 0;
	items = NULL;

}
void Stack::Init(int s){
	if (items != NULL) delete items;//再次初始化的时候，防止内存泄漏，其实这里可以用其他办法解决
	items = NULL; size = 0; top = 0;
	if (s <= 0){ cout << "参数不合理"; return; }
	items = new int[s];
	if (items == NULL)	{ cout << "内存不足，初始化失败"; }
	size = s;
}
void Stack::Push(int item){
	if (top >= size - 1){ cout << "栈满，不能进栈"; return; }
	items[top] = item;
	top++;
}
void Stack::Pop(int &item){
	if (top <= 0){
		cout << "栈空，无元素出栈"; return;
	}
	top--;
	item = items[top];
}
Stack::Stack(){
	if (items != NULL)delete items;
}


class Point {
private://私有成员，只能被该类的成员函数访问，而公有成员可以被所有的函数访问
	int x, y;
public:
	void SetPoint(int, int);//定义成员函数的时候，对函数所带的参量，仅仅说明类型是不够的，还要说明名称，而声明时不用
	void ShowPoint();
}point1, point2;//在类定义的时候，同时定义两个对象
//另外一种方法是和普通变量的定义的形式类似 Point point1,point2;


//定义成员函数的时候需要加上类名以及分隔符::，返回类型也必须匹配
void Point::SetPoint(int x1,int y1){
	x=x1;y=y1;
}
void Point::ShowPoint(){
	cout<<x<<","<<y<<endl;
}

//类与对象的使用
void test2();
void test3();

void main()
{
	/*Point p1, *p;
	p1.SetPoint(10, 15);
	p = &p1;
	p1.ShowPoint();
	p->ShowPoint();//和上一行的式子等效

	//对象数组

	Point points[5];
	for (int i = 0; i<5; i++) points[i].SetPoint(10, 20 + 10 * i);
	for (int i = 0; i<5; i++) points[i].ShowPoint();*/

	test3();
	system("pause");
}

void test2()//对象数组的动态分配
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
 
void test3(){//堆栈的应用
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