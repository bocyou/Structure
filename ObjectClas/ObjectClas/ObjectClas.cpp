// ObjectClas.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
using namespace std;
#include "Object.h"
typedef Object* PObj;
void virtualdemo();
void inheritdemo();
int _tmain(int argc, _TCHAR* argv[])
{


	virtualdemo();
	
	system("pause");
	return 0;
}

void inheritdemo(){
	Object o;
	Circle c;
	Rectangle r;
	Lable l;
	o.x = 10; o.y = 20;
	o.Show();
	c.x = 20; c.y = 20;//说明在子类中，父类的数据依旧存在，而且没有被重命名
	c.radius = 20;
	c.Show();
	c.Move(40, 40);
	c.Show();
	r.x = 30; r.y = 30;
	r.width = 40, r.height = 40;
	r.Show();
	l.x = 40; l.y = 40;
	l.width = 70; l.height = 40;//虽然调用的是父类的方法，但是名称依旧不改变
	l.SetCaption("标签1");
	l.Show();

}

void virtualdemo(){
	//演示虚函数，虚函数是重载的另一种表现。虚函数是在引入派生的概念后，用来表现基类和派生类的成员函数之间的关系的
	int i;
	PObj * objs;
	objs = new PObj[4];//objs指向开辟的空间

	Object *o = new Object();//发现没：创建了一个对象，但是动态创建的对象都是用指针去指向他们
	o->x = 10; o->y = 10;
	objs[0] = o;

	Circle *c = new Circle();
	c->x = 20; c->y = 20; c->radius = 30;
	objs[1] = c;

	Rectangle *r = new Rectangle();
	r->x = 30; r->y = 30; r->width = 40; r->height = 40;
	objs[2]=r;

	Lable *l = new Lable();
	l->x = 40; l->y = 40; l->width = 80; l->height = 40;
	l->SetCaption("标签");
	objs[3] = l;

	for (i = 0; i < 4; i++)
		objs[i]->Show();
	for (i = 0; i < 4; i++)
		delete objs[i];
	delete[] objs;

}