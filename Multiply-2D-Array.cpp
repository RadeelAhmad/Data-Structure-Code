#include<iostream>
using namespace std;
int main(){
	int a[2][2];
	int b[2][2];
	int c[2][2];
	cout<<"Enter 2D first array: "<<endl;
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			cout<<"Enter a["<<i+1<<"]["<<j+1<<"]: ";
			cin>>a[i][j];
		}
		
	}
	
	cout<<endl<<"Enter 2D Second array: "<<endl;
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			cout<<"Enter b["<<i+1<<"]["<<j+1<<"]: ";
			cin>>b[i][j];
		}
		
	}
	
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			c[i][j]=a[i][j]*b[i][j];
		}
		
	}
	cout<<endl<<"After muntiply two array"<<endl;
		for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			cout<<c[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
}
