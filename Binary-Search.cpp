#include<iostream>
using namespace std;

class binary{
private:
	int a[9]={2,4,6,8,10,12,14,16,18};
public:
	int binry(int target , int left , int right)
	{
		while(left<=right)
		{
			int mid=left+(right-left)/2;
			if(a[mid]==target)
			{
				return mid;
			}
			if(a[mid]<target)
			{
				left=mid+1;
			}
			else
			{
				right=mid-1;
			}
		}
		return -1;
	}

};
int main(){
	int target,n=8,x;
	binary b;
	cout<<"2,4,6,8,10,12,14,16,18"<<endl;
	cout<<"Enter Target number: ";
	cin>>target;
	x=b.binry(target,0,n);
	if(x!=-1){
		cout<<"-----------Number found---------------"<<endl<<"INDUX: "<<x;	
	}
	else
	{
		cout<<"-----------Number Not Found-------------------";
	}
}
