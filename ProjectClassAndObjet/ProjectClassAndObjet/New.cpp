//��̬�洢����,c++��new��ʹ��
//new�����Զ�����Ҫ��������ʹ�С���Զ�������ȷ��ָ������
//������new������Ķ����ʼ����������ʹ�ù��캯����
int *p1;
p1=new int;
*p2=20;

float *p2;

p2=new float(10.5); //�������һ��float�ʹ�С�Ŀռ�
cout<<*p2;
delete p;

int *p3;
int i;
p3=new int[10];//��������ӵ��10�����ʹ�С�Ŀռ�
for(i=0;i<10;i++) p3[i]=i+1;

Point *p4;//����ָ��point�����͵�ָ�����
p4=new Point;//����һ��point����,��ַ��p4
p4->SetPoint();//ͨ��ָ����ʶ���Ĺ��г�Ա����
delete p4;

//��������ɾ���������в�ͬ
Point *p5;
int i;
p5=new Point[10];//����ӵ��10��Point��������飬�׵�ַ����p5
for(i=0;i<10;i++) p5[i].SetPoint(10,20+10*i);
for(i=0;i<10;i++) p5[i]->SetPoint(10,20+10*i);
delete[] p5;

 