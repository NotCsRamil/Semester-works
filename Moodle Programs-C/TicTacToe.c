#include <stdio.h>
void read_board(int ttt[][3]){
	int i,j;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&ttt[i][j]);
		}
	}
}
int count_emptycell(int ttt[][3]){
	int empty_cell=0,i,j;
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if (ttt[i][j]==-1){
				empty_cell++;
			}
		}
	}
	if (empty_cell==9){
		printf("Initial state");
	}
	
	return empty_cell;
}
int check_rowwise(int ttt[][3],int win){
	int i;
	for (i=0;i<3;i++){
		if(ttt[i][0]==1 && ttt[i][1]==1 && ttt[i][2]==1){
			printf("Player1 wins");
			win=1;
		}
		else if(ttt[i][0]==2 && ttt[i][1]==2 && ttt[i][2]==2){
			printf("Player2 wins");
			win=1;
		}
	}
	return win;
}
int check_colwise(int ttt[][3],int win){
	int i;
	for (i=0;i<3;i++){
		if(ttt[0][i]==1 && ttt[1][i]==1 && ttt[2][i]==1){
			printf("Player1 wins");
			win=1;
		}
		else if(ttt[0][i]==2 && ttt[1][i]==2 && ttt[2][i]==2){
			printf("Player2 wins");
			win=1;
		}
	}
	return win;
}

int check_diagonalwise(int ttt[][3],int empty_cell){
	int win;
	if ((ttt[0][0]==1 && ttt[1][1]==1 && ttt[2][2]==1)|| (ttt[0][2]==1 && ttt[1][1]==1 && ttt[2][0]==1)){
		printf("Player1 wins");
		win=1;
	}
	else if ((ttt[0][0]==2 && ttt[1][1]==2 && ttt[2][2]==2)|| (ttt[0][2]==2 && ttt[1][1]==2 && ttt[2][0]==2)){
		printf("Player2 wins");
		win=1;
	}
	else if(empty_cell==0){
	printf("Draw");
	}
	else{
		printf("Intermediate");
	}

return win;
}

int main(){
	int a[3][3],b=0,c=0;
	read_board(a);
	c=count_emptycell(a);
	b=check_rowwise(a,b);
	b=check_colwise(a,b);
	c=check_diagonalwise(a,c);
	
}

