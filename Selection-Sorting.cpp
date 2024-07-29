#include<iostream>
using namespace std;

class sort{
public:
	void swap(int *a , int *b)
	{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	} 
};
int main()
{
	sort b;
	int x;
	int a[7]={5,2,1,4,3,7,6};
	
	cout<<"Before Sorting: ";
		for(int j=0 ; j<7 ; j++)
		{
			cout<<a[j]<<" ";
		}
		
	for(int i=0 ; i<7 ; i++)
	{
		x=i;
		for(int k=0 ; k<7; k++ )
		{
		
			if(a[k]>a[x])
			{
				b.swap(&a[k], &a[x]);
			}
		}
	}
	
	cout<<endl<<"After Selection Sorting: ";
	for(int j=0 ; j<7 ; j++){
		cout<<a[j]<<" ";
	}
}


