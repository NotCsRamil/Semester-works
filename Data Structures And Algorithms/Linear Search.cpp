#include <iostream>
using namespace std;
int main(){
	int arr[10];
	int x,i;
	int n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>x;
	for(i=0;i<n;i++){
		if(x==arr[i]){
			cout<<"Element found at "<<i;
		}
		else{
			cout<<"Element not found";
		}
	}
}

