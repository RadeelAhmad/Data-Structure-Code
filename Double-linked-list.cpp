#include<iostream>
using namespace std;
class node{
public:
	int data;
	node *next;
	
node(){
		next=NULL;
	}
};

class linkedlist{
private:	
	node* head;
public:
	linkedlist()
	{
		head = NULL;
	}
void add(int data)
	{
		node *temp = new node();
		temp->data=data;
		temp->next=head;
		head=temp;
	}
void display()
	{
		node *temp= head;
		while(temp!=NULL){
			cout<<"Value: "<<temp->data<<endl;
			temp=temp->next;
		}
	}
int campare(int value)
{
	int count=0;
	node *temp= head;
	while(temp!=NULL)
	{
		if(value==temp->data)
		{
			count++;
		}
		temp=temp->next;
	}
	return count;
}	

};

int main(){
	int value;
	linkedlist a;
	a.add(10);
	a.add(10);
	a.add(10);
	a.add(10);
	a.add(20);
	a.add(20);
	a.add(20);
	a.add(30);
	a.add(40);
	a.add(50);
	a.add(60);
	a.add(60);
	a.add(70);
	a.add(70);
	a.add(70);
	a.add(70);
	a.display();
	cout<<endl<<"Enter value: ";
	cin>>value;
	int num=a.campare(value);
	cout<<endl<<"Number will be repeat: "<<num;
}
