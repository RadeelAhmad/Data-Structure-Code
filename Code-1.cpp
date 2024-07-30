#include<iostream>
using namespace std;

class linear{
public:
	int a[6]={23,56,34,24,24,7};
	
	void by_indux(int x)
	{
		cout<<"Number In Indux "<<x<<"--->>>"<<a[x];
	}
	void by_number(int num)
	{
		for(int i=0 ; i<6 ; i++)
		{
			if(num==a[i])
			{
			cout<<"Number on indux "<<"--->>> "<<i;
			}	
		}
		
	}
};
int main(){
	cout<<"23,56,34,24,24,7"<<endl;
	int n=6,opt,num,indux;
	linear l;
	cout<<"1-search number by indux:"<<endl;
	cout<<"2-search indux by number:"<<endl;
	cout<<"Enter opt:";
	cin>>opt;
	switch(opt)
	{
		case 1:
			{
				cout<<endl<<"Enter Indux:";
				cin>>indux;		
				l.by_indux(indux);
				break;
			}
		case 2:
			{
				cout<<endl<<"Enter number:";
				cin>>num;		
				l.by_number(num);
				break;
			}
		default:
		{
			cout<<"--------invalid---------";
			break;
		}		
	}
}
