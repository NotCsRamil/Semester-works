#include<stdio.h>
#include<stdlib.h>
int main(){
	int p,q=0;
	int i;
	int *r=(int*)malloc(12*sizeof(int));
	for(i=0;i<12;i++){
		*(r+i)=0;
		  r-=11;
	}

	float Avg=0;
	scanf("%d",&p);
	for(i=0;i<p;i++){
		int date,month,year,rain;
		scanf("%d-%d-%d",&date, &month, &year);
		scanf("%d",&rain);
		if(*(r+month-1)==0)*(r+month-1)=0;
			*(r+month-1)+=rain;
			
		Avg=(q*Avg+rain)/(q+1);
		q++;
		
	}
	for(i=0;i<12;i++){
		if (*(r+i) != 0){
			printf("%d\n%d\n",i+1,*(r+i));
		}
	}
	printf("%.0f\n",Avg);
	return 0;
}
