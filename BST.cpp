#include<iostream>
using namespace std;
class Tnode{
public:
	int data;
	Tnode *left=NULL;
	Tnode *right=NULL;

	Tnode(int i){
		data=i;
	}

};

class BST{
private:
	Tnode *root=NULL;
	Tnode* insert(int i , Tnode* t)
	{
		if(t==NULL)
		{
			t= new Tnode(i);
		}
		else if(i< t->data)
		{
			t->left=insert(i, t->left);
		}
		else if(i> t->data)
		{
			t->right=insert(i , t->right);
		}
		return t;
	}
	
	void inorder(Tnode *t)
	{
		if(t==NULL)
		return ;
		inorder(t->left);
		cout<<t->data<<" ";
		inorder(t->right);
	}
public:
	void insert(int i){
		root=insert(i , root);
	}
	
	void inorder(){
		inorder(root);
	}
};

int main(){
	BST b;
	b.insert(10);
	b.insert(20);
	b.insert(5);
	b.insert(3);
	b.inorder();
}
