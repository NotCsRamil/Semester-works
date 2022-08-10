#include <iostream>
using namespace std;
/*
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
*/

int main(){
	int arr[10];
	int i,l,h,m;
	int j,x;
	int temp;
	int n=5;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	cout<<"\n";
	cin>>x;
	l=0;
	h=n-1;
	while(l<=h){
		m=l+(h-1)/2;
		if(arr[m]==x){
			cout<<" "<<arr[m]<<" is found at "<<m;
			
		}
		if(arr[m]<x){
			l=m+1;
			
		}
		else{
			h=m-1;
			
		}
		return -1;
	}
	
}
