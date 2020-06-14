#include <stdio.h>

int is_perfect(int);

int main(void){
	int num=1;
	int count=0;
	while(count!=3){
		if(is_perfect(num)==1){
			printf("%d\n", num);
			count++;
		}
		num++;
	}
}

int is_perfect(int num)
{
	int i;
	int sum=0;
	for(i=1; i<num; i++){
		if(num % i == 0){
    	    sum += i;
    	}
	}
    if(sum == num){
		return 1;
    }else{
    	return 0;
	}
}
