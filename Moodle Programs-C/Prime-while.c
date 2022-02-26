#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
	int i=2;
	int ch=0;
	while(i<n){
		if(n%i==0){
		    ch=1;
		}
		i++;
	}
	if(ch==0){
		printf("Prime");
	}
	else{
	    printf("Not Prime");
	}
}
