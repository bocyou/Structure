#ifndef SEQUENLIST
#define SEQUENLIST
#define MAXSIZE 100//��󳤶�
typedef int DataType;
class SequenList{
public :
	void Initiatue();
	int Length();
	int Insert(DataType x, int i);
	int Deleted(int i);
	int Locate(DataType x);
	DataType Get(int i);
private:
	DataType data[MAXSIZE];
	int len;
};
#endif