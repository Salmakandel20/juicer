#include<iostream>
using namespace std;
int main(){
	int n,b,d,x,sum=0,count=0;
	cin>>n>>b>>d;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x<=b) sum+=x;
		if(sum>d)
		{
			count++;
			sum=0;
		 } 
	}
	cout<<count;
}
