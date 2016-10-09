//动态存储分配,c++中new的使用
//new可以自动计算要分配的类型大小能自动返回正确的指针类型
//可以用new将分配的对象初始化，（比如使用构造函数）
int *p1;
p1=new int;
*p2=20;

float *p2;

p2=new float(10.5); //将会分配一个float型大小的空间
cout<<*p2;
delete p;

int *p3;
int i;
p3=new int[10];//连续分配拥有10个整型大小的空间
for(i=0;i<10;i++) p3[i]=i+1;

Point *p4;//定义指向point类类型的指针变量
p4=new Point;//分配一个point对象,地址给p4
p4->SetPoint();//通过指针访问对象的共有成员函数
delete p4;

//数组对象的删除方法略有不同
Point *p5;
int i;
p5=new Point[10];//分配拥有10个Point对象的数组，首地址赋给p5
for(i=0;i<10;i++) p5[i].SetPoint(10,20+10*i);
for(i=0;i<10;i++) p5[i]->SetPoint(10,20+10*i);
delete[] p5;

 