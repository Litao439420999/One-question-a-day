//编写函数fun，其功能是∶求出1~1000之间能被7或11整除，但不能同时被7和11整除的所有整数，并将其放在a所指的数组中，通过n返回这些数的个数。
//void fun (int a[], int *n)
#include <stdio.h>

void fun(int a[], int *n)
{
    int i , count = 0;

    for(i = 1; i < 1000; i++)
    {
        if( (i % 7 == 0 || i % 11 == 0) &&  i % 77 != 0 )
        {
                a[count]  = i;
                count++;
        }   


    }

    *n = count;    
}

int main(void)
{
    int  x[300], i,n;

    fun(x,&n);

    printf("n:%d\n",n);
    for( i = 0; i < n; i++)
        printf("%5d",x[i]);

    return 0;


}