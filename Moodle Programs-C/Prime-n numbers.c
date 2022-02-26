#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
	int i,j;
	for(i=2;i<=n;i++){
		int ch=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				ch=1;
			}
		}
		if(ch==0){
			printf("%d\n",i);

		}
	}
}

