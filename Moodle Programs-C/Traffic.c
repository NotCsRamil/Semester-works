#include <stdio.h>
#include<stdlib.h>
void read_Count(int v[10],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
}
float find_mean(int v[10],int n){
	int Sum=0,avg;
	int j;
	for (j=0;j<n;j++){
		Sum+=v[j];
	}
	avg=Sum/n;
	return avg;
}
void print_diff(int v[10],int n,float avg){
	int k,r;
	for(k=0;k<n;k++){
	r=avg-v[k];
	printf("%d\n",abs(r));
	}
}

int main(){
	int a[10],b,c;
	scanf("%d",&b);
	read_Count(a,b);
	c=find_mean(a,b);
	print_diff(a,b,c);
}

