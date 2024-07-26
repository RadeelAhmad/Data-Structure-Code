#include<iostream>
using namespace std;
int main(){
	int arry1[10]={443,42,1,46,2,74,43,12,24,74};
	int arry2[10]={1,2,3,4,5,6,0,8,9,10};
	int arry3[10];
for(int i=0 ; i<10 ; i++)
	{
		arry3[i]=arry1[i]+arry2[i];
	}
cout<<"your Arry: ";
	for(int i=0 ; i<10 ; i++)
	{
		cout<<arry3[i]<<" ";
	}
	cout<<endl<<"Numbers with the same digit in tens and units places: ";
	for (int i=0 ; i<10; ++i) {
        float tens=arry3[i]/10;
        float units=arry3[i] % 10;
        if (tens==units) 
		{
            cout<<arry3[i]<<" ";
        }
    }
    
}
