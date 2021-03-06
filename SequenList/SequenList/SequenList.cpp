#include "SequenList.h"
#include <iostream>
using namespace std;

void SequenList::Initiatue(){
	len = 0;
}
int SequenList::Insert(DataType x,int i){
	int j;
	if (len >= MAXSIZE)
	{
		cout << "overflow!" << endl;
		return 0;
	}
	else if ((i<1) || (i>len + 1)){
		cout << "position is not correct!" << endl;
		return 0;
	}
	else{
		for (j = len; j >= i; j--)
			data[j] = data[j - 1];
		data[i - 1] = x;
		len++;
		return 1;
	}
}
int SequenList::Deleted(int i){//时间性能分析
	int j;
	if ((i<1) || (j>len)){
		cout << "position is not correct!" << endl;
		return 0;
	}
	else{
		for (j = i; j < len; j++)
			data[j - 1] = data[j];
		len--;
		return 1;
	}
}
int SequenList::Locate(DataType x){
	int j = 0;
	while ((j < len) && (data[j] != x))j++;
	if (j < len) return j + 1;
	else return 0;
}
DataType SequenList::Get(int i){//读取id对应的值
	if ((i<1) || (i>len)){
		cout << "position is not correct!" << endl;
		return NULL;
	}
	else return data[i - 1];
}
int SequenList::Length(){
	return len;
}