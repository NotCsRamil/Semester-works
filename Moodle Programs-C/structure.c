#include<stdio.h>
#include<stdlib.h>
struct student{
	char roll_no[15];
	float marks;
};
int main(){
	struct student stud[5];
	int i;
	for(i=0;i<4;i++){
		scanf("%s",&*stud[i].roll_no);
		scanf("%f",&stud[i].marks);
	}
	for(i=0;i<4;i++){
		printf("%s\n",stud[i].roll_no);
		printf("%0.1f\n",stud[i].marks);
	}
}
