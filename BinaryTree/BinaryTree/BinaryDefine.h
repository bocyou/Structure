#ifndef BINARYTREE
#define BINARYTREE
#include <iostream>
typedef int DataType;//可以方便的改为模板
class BinTreeNode{
public:
	DataType data;
	BinTreeNode *leftChild;
	BinTreeNode *rightChild;
	BinTreeNode() { leftChild = NULL; rightChild = NULL; }
};
class BinaryTree{
public:
	BinTreeNode *root;
	BinaryTree(){ root = NULL; }
	~BinaryTree(){ DeleteTree(); }
	bool InsertLeft(BinTreeNode*current, DataType x);//x作为current所指节点的左孩子
	bool InserRight(BinTreeNode*current, DataType x);
	void Preorder(BinTreeNode*current);
	void InOrder(BinTreeNode*current);
	void Postorder(BinTreeNode*current);
	BinTreeNode*Find(BinTreeNode*current, DataType x);
	void Destory(BinTreeNode*current);
	void DeleteTree(){ Destory(root); root = NULL; }
	bool IsEmpty(){return root==NULL}
	BinTreeNode* CreatBinTree();
};
#endif
