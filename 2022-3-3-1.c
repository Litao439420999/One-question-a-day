//给定程序中，函数fun的功能是∶调用随机函数产生20个互不相同的整数放在形参a所指数组中（（此数组在主函数中已置0）。
//请在程序的下画线处填入正确的内容并把下画线删除，使程序得出正确的结果。
#include <stdio.h>
#include <stdlib.h>

void fun( int *a) 
{ 
    int i, x, n=0; 
    x=rand()%20; 

    while (n< 20) // 
    { 
        for(i=0; i<n; i++) 
        if( x==a[i] )
             break;    ; // 
        if( i== n) //
        { a[n]=x; n++; } 
        x=rand()%20; 
    } 
}

int main(void)
{
    int i,x[20]={0};

    fun(x);

    for(i = 0; i < 20; i++)
        printf("%5d",x[i]);

    return 0;
}
