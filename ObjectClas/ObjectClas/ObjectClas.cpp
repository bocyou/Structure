// ObjectClas.cpp : �������̨Ӧ�ó������ڵ㡣
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
	c.x = 20; c.y = 20;//˵���������У�������������ɴ��ڣ�����û�б�������
	c.radius = 20;
	c.Show();
	c.Move(40, 40);
	c.Show();
	r.x = 30; r.y = 30;
	r.width = 40, r.height = 40;
	r.Show();
	l.x = 40; l.y = 40;
	l.width = 70; l.height = 40;//��Ȼ���õ��Ǹ���ķ����������������ɲ��ı�
	l.SetCaption("��ǩ1");
	l.Show();

}

void virtualdemo(){
	//��ʾ�麯�����麯�������ص���һ�ֱ��֡��麯���������������ĸ�����������ֻ����������ĳ�Ա����֮��Ĺ�ϵ��
	int i;
	PObj * objs;
	objs = new PObj[4];//objsָ�򿪱ٵĿռ�

	Object *o = new Object();//����û��������һ�����󣬵��Ƕ�̬�����Ķ�������ָ��ȥָ������
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
	l->SetCaption("��ǩ");
	objs[3] = l;

	for (i = 0; i < 4; i++)
		objs[i]->Show();
	for (i = 0; i < 4; i++)
		delete objs[i];
	delete[] objs;

}