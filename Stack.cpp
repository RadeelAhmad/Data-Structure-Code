#include<iostream>
using namespace std;
class stack{
	private:
		int a[10];
		int size=10,num;
	public:
		stack()
		{
			num=0;
		}
		void push(int value)
		{
			a[num]=value;
			num++;
		}
		void pop()
		{
			num--;
		}
		void display()
		{
			for(int i=0 ; i<num ; i++)
			{
				cout<<a[i]<<endl;
			}
		}
};

int main(){
	stack obj;
	obj.push(10);
	obj.push(20);
	obj.push(30);
	obj.push(40);
	obj.push(50);
	obj.display();
	cout<<"-------------------------"<<endl;
	obj.pop();
	obj.pop();
	obj.pop();
	obj.display();
}
