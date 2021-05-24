#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char* argv[]){

	unsigned long long int count = 1;
	int T,i,j =0;
	scanf("%d", &T);
	int N[T];
	int M[T];
	for(i=0;i<T;i++){
			
		scanf("%d", &N[i]);
		scanf("%d", &M[i]);
	}	

	
	for(j=0;j<T;j++){
		count = 1;
		if(N[j] < 15) 	{
			for(i=M[j];i>M[j]-N[j];i--){
				count *= i;
			}
	
			for(i=N[j];i>0;i--) count/=i;

			printf("%lld \n",count);
		}
		else{
			for(i=M[j];i>N[j];i--){
				count *= i;
			}	
			
			for(i=M[j]-N[j];i>0;i--) count/=i;
			printf("%lld \n",count);
		}
	}
	return 0;
}

