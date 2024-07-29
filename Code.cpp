#include<iostream>
using namespace std;
int car(int driver , int passanger){
	int number=0;
	int remain= passanger;
	for(int i=0 ; i<driver ; i++)
	{
		number++;
		for(int k=0 ; k<4 ; k++)
		{
			if(remain!=0)
			{
				number++;
				remain--;
			}	
		}
	cout<<number<<" ";
	number=0;	
	}
}

int main(){
	int driver, passanger,cars;
	cout<<"Enter Number of Driver: ";
	cin>>driver;
	cout<<"Enter Number of Passanger: ";
	cin>>passanger;	
	if(driver>0 && passanger>0)
	{
		cars=car(driver,passanger);
	}
	else
	cout<<"-------INVALID INPUT----------";
}
