#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if (a>339.15 && a<375.85) {
		printf("Mercury");
	}
	if (a>95 && a<105) {
		printf("Water");
	}
	if (a>1127.65 && a<1246.35) {
		printf("Copper");
	}
	if (a>2083.35 && a<2302.65) {
		printf("Silver");
	}
	if (a>2527 && a<2793) {
		printf("Gold");
	}
	if (a<339.15 && a<95 && a<1127.75 && a<2083.35 && a<2527){
		printf("Substance unknown");
	}
	if (a>374.85 && a>1055 && a>1246.35 && a>2302.65 && a>2793){ 
		printf("Substance unknown");
	}

}
