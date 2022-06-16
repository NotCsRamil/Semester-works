#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct {
	char date[10];
	int cm;
}rainfall;
typedef struct{
	int day,month,year;
}date;
date datechArr_dateStrvar(char *dateChArr){
	date d;
	char date_month_temp[2];
	date_month_temp[0]=dateChArr[3];
	date_month_temp[1]=dateChArr[4];
	d.month=atoi(date_month_temp);
	d.day=1;
	d.year=2022;
	return d;
}
int totalMonthlyRainfall(rainfall *r,int n,int *rain){
	date d;
	int i;
	for(i=0;i<n;i++){
		d=datechArr_dateStrvar(r[i].date);
		rain[d.month]=rain[d.month]+r[i].cm;
		//sum+=r[i].cm;
	
	}
	return 0;
	
}
int average(rainfall *r,int n,int *rain){
	int i;
	date d;
	float sum=0;
	float avg;
	for(i=0;i<n;i++){
		d=datechArr_dateStrvar(r[i].date);
		rain[d.month]=rain[d.month]+r[i].cm;
		sum+=r[i].cm;
	
	}
	avg=sum/(n);
	printf("%.0f\n",round(avg));
	return 0;
	
}
int main(){
	int n;
//	int sum=0;
	scanf("%d",&n);
	rainfall *r=(rainfall*)malloc(n*sizeof(rainfall));
	int i;
	for(i=0;i<n;i++){
		scanf("%s%d",r[i].date,&r[i].cm);
		
	}
	int rain[12]={0};
	totalMonthlyRainfall(r,n,rain);
	
	for(i=0;i<12;i++){
		if(rain[i]!=0){
		printf("%d\n%d\n",i,rain[i]);
		
		}
		
	}
	average(r,n,rain);
	

}
