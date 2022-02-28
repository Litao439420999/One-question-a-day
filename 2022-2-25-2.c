#include <stdio.h>

int railsum(int n,int s)
{
    if(n == 0)
       return s;
    else 
       return railsum(n - 1,s + n);
}

int main(void)
{
    int n, s = 0, sum = 0;

    sum = railsum(10,0);

    printf("sum = %d\n",sum);

    return 0;




}