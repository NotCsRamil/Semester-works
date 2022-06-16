#include<stdio.h>
int ele(int s[5]){
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&s[i]);
	}
	return 0;
}
	

int Maximum(int s[5]){
	int *max;
	max=s;
	*max=*s;
	int c=1;
	for(c=1;c<5;c++){
		if(*(s+c)>*max){
			*max=*(s+c);
		}
	}
	printf("%d\n",*max);
	return 0;

}

int Minimum(int s[5]){
	int *min;
	min=s;
	*min=*s;
	int c=1;
	for(c=1;c<5;c++){
		if(*(s+c)<*min){
			*min=*(s+c);
		}
	}
	printf("%d\n",*min);
	return 0;

}
int main(){
	int a[5];
	ele(a);
	Maximum(a);
	Minimum(a);
		
}

