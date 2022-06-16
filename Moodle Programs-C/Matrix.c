#include<stdio.h>
int main(){
	int m,n,i,j,m1[10][10],m2[10][10],Sum[10][10];
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",&m2[i][j]);
		}
	}
	for (i=0; i<m; i++) {
    	for (j=0 ; j<n; j++) {
         Sum[i][j] = m1[i][j] + m2[i][j];
         printf("%d\n", Sum[i][j]);
      }
   }
}
