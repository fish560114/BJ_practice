#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char* argv[]){


	int N,M;
	scanf("%d",&N);
	scanf("%d",&M);
	char CB[N][M];
	char G;//number input + enter >> enter get int to CB[0][0] so make G
	int i,j;
	scanf("%c",&G);
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){	
			scanf("%c", &CB[i][j]);
		}
	}	

	for(i=0;i<N;i++){
		for(j=0;j<M;j++) printf("%c",CB[i][j]);
		printf("\n");
		}	
	
	return 0;
}

