#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
	int i;
	int ch=0;
	for(i=2;i<n;i++){
		if(n%i==0){
		    ch=1;
		}
	}
	if(ch==0){
		printf("Prime");
	}
	else{
	    printf("Not Prime");
	}
}
