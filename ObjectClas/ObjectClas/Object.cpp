#include "stdafx.h"
#include "Object.h"
#include <iostream>
#include <string>
using namespace std;
void Object::Show()
{
	cout << "OBJ:" << x << "," << y << endl;
}
void Object::Move(int dx, int dy){
	x += dx; y += dy;
}
void Circle::Show()
{
	cout << "CIR:" << x << "," << y << "," << radius << endl;
}
void Rectangle::Show(){
	cout << "RECT" << x << "," << y << "," << width << "," << height << endl;
}
void Lable::Show(){
	Rectangle::Show();//直接用基类的方法
	cout << "CAP:" << caption;

}
void Lable::SetCaption(const char *str){
	if (str != NULL) strcpy_s(caption, str);
}