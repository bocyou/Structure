#ifndef OBJECTCLAS
#define OBJECTCLAS

class Object{
public:int x, y;
	   virtual void Show(); //�麯�����Ա����¶��壬�����Ƶ���ͻ��ౣ��һ��
	   void Move(int dx, int dy);

};
class Circle :public Object{
public:
	int radius;
	void Show();//��Բ�ͻ��ʵ��ǲ�һ���ģ�����Ҫ����
};
class Rectangle :public Object{//���showû�б�����Ϊ�麯�����������Ϊ�����˸����еĺ���
public:
	int width, height;
	void Show();
};
class Lable :public Rectangle{
public:
	char caption[20];//�ھ��εĻ���������һ���ַ�����
	void Show();
	void SetCaption(const char *str);
};
#endif