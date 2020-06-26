#include <stdio.h>

int main(void){
	char string[3];
	int num;
	scanf ("%d", &num);
	scanf ("%s", string);
	for (; num>=1; num--){
		printf("%s", string);
	}
	return 0;
}
