#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
	int i;
	int ch=0;
	i=2;
	do{
		if(n%i==0){
		    ch=1;
		}
		i++;
	}
	while(i<n-1);
	if(ch==0){
		printf("Prime");
	}
	else{
	    printf("Not Prime");
	}
}
