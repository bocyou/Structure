#ifndef OBJECTCLAS
#define OBJECTCLAS

class Object{
public:int x, y;
	   virtual void Show(); //虚函数可以被重新定义，但名称等需和基类保持一致
	   void Move(int dx, int dy);

};
class Circle :public Object{
public:
	int radius;
	void Show();//绘圆和绘质点是不一样的，所以要重载
};
class Rectangle :public Object{//如果show没有被定义为虚函数，这里会认为隐藏了父类中的函数
public:
	int width, height;
	void Show();
};
class Lable :public Rectangle{
public:
	char caption[20];//在矩形的基础上增加一个字符数组
	void Show();
	void SetCaption(const char *str);
};
#endif