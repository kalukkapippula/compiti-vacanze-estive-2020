#include <stdio.h>
#define N 100

int main(void){
	int n,i,j,a[N][N];
		
	do {
		printf("Inserire numero di righe: ");
		scanf("%d", &n);
	} while ((n>=N) || (n<1));
	
	a[0][0]=1;
	for(j=1;j<n;j++)
		a[0][j]=0;
	
				
	for(i=1;i<n;i++) {
		a[i][0]=1;
		for(j=1;j<n;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	
	for(i=0;i<n;i++){
    	for (j=1; j<(n-i)*4;j++){
			printf(" "); //inserisce gli spazi bianchi
		}
		for(j=0;j<=i;j++){
			printf("%8d ", a[i][j]);
		}
        	printf("\n");
    	
	}
}
