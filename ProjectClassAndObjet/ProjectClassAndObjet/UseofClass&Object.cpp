//��������ʹ��
void main()
{Point p1,p2;
	p1.SetPoint(10,15);
	p2.SetPoint(30,48);
	p1.ShowPoint();
	p2.ShowPoint();
	}
//����ָ������ָ��
void main()
{
	Point p1,*p;
	p1.SetPoint(10,15);
	p=&p1;
	p1.ShowPoint();
	p->ShowPoint();//����һ�е�ʽ�ӵ�Ч
	��