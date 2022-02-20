#include<stdio.h>
#include<string.h>
int main(){
	char ship[20];
	scanf("%s",ship);
	if (strcmp(ship,"B")==0||strcmp(ship,"b")==0){
		printf("Battleship");
	}
	if (strcmp(ship,"C")==0||strcmp(ship,"c")==0){

		printf("Cruiser");
	}
	if (strcmp(ship,"D")==0||strcmp(ship,"d")==0){
		printf("Destroyer");
	}
	if (strcmp(ship,"F")==0||strcmp(ship,"f")==0){
		printf("Frigate");
	}
}
