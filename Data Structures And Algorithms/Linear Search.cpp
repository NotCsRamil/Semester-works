#include <iostream>
using namespace std;
int binarysearch(int arr[],int l,int h,int x){
	while (l<=h){
		int m=l+(h-1)/2;
		if(arr[m]==x){
			return m;
		}
		if(arr[m]<x){
			return l=m+1;
		}
		else if (arr[m]>x){
			return h=m-1;
		}
	}
	return -1;
}
int main(){
	int arr[10];
	int x,i;
	int n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>x;
	int res=binarysearch(arr,0,n,x);
	if(res==-1){
		cout<<"element not in array";
	}
	else{
		cout<<x<<" is present at "<<res;
	}
}
