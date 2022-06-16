#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	scanf("%d",&n);
	float *ele;
	ele=(float*)malloc(n*sizeof(float));
	for(i=0;i<n;i++){
		scanf("%f",&ele[i]);
	}
	for(i=n-1;i>=0;i--){
	    printf("%.0f\n",(*(ele+i)));
	}
	
}
