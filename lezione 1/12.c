#include <stdio.h>
#include<math.h>

/*
Il programma ricerca i fattori e non scompone in fattori primi (non scrive quante volte sono ripetuti)
*/

int check_prime(int);

int main(void){
	int num;
	int div;
	int i;
	scanf("%d", &num);
	for(div=2; div<=num; div++){
		if(num%div==0){
			if(check_prime(div)==1){
				printf("%d\n", div);	
			}
    	}	
	}
	return 0;
}

int check_prime(int a)
{
   int c;

   for ( c = 2 ;c <=sqrt(a); c++ )
   { 
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}
