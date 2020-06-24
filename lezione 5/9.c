#include <stdio.h>
#include <math.h>

int main(void){
	double num;
	double exp;
	scanf("%lf", &num);
	scanf("%lf", &exp);
	printf("%lf^%lf=%lf", num, exp, pow(num, exp));
	return 0;
}
