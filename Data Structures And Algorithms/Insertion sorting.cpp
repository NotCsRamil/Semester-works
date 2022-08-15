#include <iostream>
using namespace std;
int main(){
	int arr[10];
	int i,j,key;
	int n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}	
	for(i=0;i<n;i++){
		cout<<" "<<arr[i];
	} 

  	
}
