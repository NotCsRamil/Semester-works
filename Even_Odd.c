#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	if (a%2==0){
		printf("even");
	}
	if (a%2==1){
	    printf("odd");
	}
	if (a<0){
		printf("Enter only positive number");
		
	}
	
}
