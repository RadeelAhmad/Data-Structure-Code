#include<iostream>
using namespace std;
class que{
	private:
		int a[10];
		int font=0,back=0,size=10,count,num=0;
	public:
		que()
		{
			count=0;
		}
		int add(int value)
		{
			if(num<size)
			{
				a[back]=value;
				back=(back+1)%size;
				num++;
			}
		}
		int deque()
		{
			if(num>0)
			{
				int temp=a[font];
				font=(font+1)%size;
				num--;
				return temp;
			}
		}
		void display()
		{
			for(int i=0 ; i<num ; i++)
			{
				cout<<a[(font + i) % size]<<endl;	
			}	
		}
};

int main(){
	que q;
	int x;
	q.add(10);
	q.add(20);
	q.add(30);
	q.add(40);
	q.add(50);
	q.display();
	cout<<endl<<"----------------------"<<endl;
	x=q.deque();
	x=q.deque();
	x=q.deque();
	q.display();
}
