#include <stdio.h>

unsigned bin(int);

int main()
{
    unsigned bnum;
    int num;
    scanf("%d",&num);
    bnum = bin(num);
    printf("%u",bnum);

    return 0;
}

unsigned bin(int a)
{
    unsigned b=0,r,f=1;
    while(a != 0)
    {
         r = a % 2;
         b = b + r * f;
         f = f * 10;
         a = a / 2;
    }
    return b;
}

