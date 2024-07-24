/* in bubble sort your comapre 0>1 if larger
than swap than we 
0>1 1>2 2>3 3>4 4>5 5>6
0>1 1>2 2>3 3>4 4>5
0>1 1>2 2>3 3>4
0>1 1>2 2>3
0>1 1>2
0>1
*/

#include<iostream>
using namespace std;
class bubble{
public:
	void swap(int *a , int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
} 
};
int main(){
	bubble b;
	int a[7]={5,2,1,4,3,7,6};
	
	cout<<"Before Sorting: ";
		for(int j=0 ; j<7 ; j++)
		{
			cout<<a[j]<<" ";
		}
		
	for(int i=0 ; i<6 ; i++)
	{
		for(int k=0 ; k<6-i; k++ )
		{
		
			if(a[k]>a[k+1])
			{
				b.swap(&a[k], &a[k+1]);
			}
		}
	}
	cout<<endl<<"After Bubble Sorting: ";
	for(int j=0 ; j<7 ; j++){
		cout<<a[j]<<" ";
	}
}


