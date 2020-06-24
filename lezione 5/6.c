#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int N=num;
	int a[num][N], i, j;
	
	for(i=0; i<num; i++) { 
		for(j=0; j<N; j++) {
			a[i][j]=(i+1)*(j+1);
    	}
	}
	
	for(i=0; i<num; i++) {
		for(j=0; j<N; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
