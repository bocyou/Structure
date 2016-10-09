//类与对象的使用
void main()
{Point p1,p2;
	p1.SetPoint(10,15);
	p2.SetPoint(30,48);
	p1.ShowPoint();
	p2.ShowPoint();
	}
//定义指向对象的指针
void main()
{
	Point p1,*p;
	p1.SetPoint(10,15);
	p=&p1;
	p1.ShowPoint();
	p->ShowPoint();//和上一行的式子等效
	｝