#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next;	
	node(){
		next=NULL;
	}	
};

class LinkedList{
private:
	node * head;
public:
	LinkedList(){
		head=NULL;
	}
	void insert(int data){
		node * newnode=new node();
		newnode->data=data;
		newnode->next=head;
		head=newnode;
	}
	void display(){
		node * temp=head;
		while(head!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
};
int main(){
	LinkedList obj;
	obj.insert(11);
	obj.insert(12);
	obj.insert(13);
	obj.insert(14);
	obj.insert(15);
	obj.display();
}
