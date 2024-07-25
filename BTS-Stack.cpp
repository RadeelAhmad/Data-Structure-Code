#include<iostream>
#include<stack>
using namespace std;
class Tnode{
public:
	int data;
	Tnode *right=NULL;
	Tnode *left=NULL;
Tnode(int i)
{
	data=i;
}
};

class BST{
private:
	Tnode *root=NULL;
	Tnode *insert(int i , Tnode *t)
	{
		if(t==NULL)
		{
			t = new Tnode(i);
		}	
		else if(i < t->data)
		{
			t->left=insert(i,t->left);
		}
		else if(i> t->data)
		{
			t->right=insert(i,t->right);
		}
	return t;
	}
	
	
	
public:
	void insert(int i)
	{
		root=insert(i,root);
	}	
	
	void inorder(){
		stack<Tnode *> stack;
		Tnode *current= root;
		while(!stack.empty() || current != NULL)
		{
			if(current != NULL)
			{
				stack.push(current);
				current=current->left;
			}
			else 
			{
				current= stack.top();
				stack.pop();
				cout<<current->data<<" ";
				current=current->right;	
			}
		}
	}
};

int main(){
	BST b;
	b.insert(10);
	b.insert(3);
	b.insert(99);
	b.insert(5);
	b.inorder();
}
