//给定程序中，函数fun的作用是∶不断从终端读入整数，由变量a统计大于0的个数，用变量c来统计小于0的个数，当输入0时结束输入，并通过形参指针pa和pb把统计的数据传回主函数进行输出。
//请在程序的下画线处填入正确的内容并把下画线删除，使程序得出正确的结果。
#include <stdio.h>


void fun( int *px, int *py) 
 { 
    int a=0,b=0,k; // 
    scanf( "%d", &k ); 
    while(k != 0) // 
    { 
        if (k>0 ) a++; 
        if(k<0 ) b++; 
        scanf( "%d", &k );  // 
    } 
     *px=a; *py=b; 
}

int main(void)
{
    int  littleZreo, bigZero;

    fun(&littleZreo,&bigZero);

    printf("小于0的个数:%d,大于0的个数:%d\n",littleZreo,bigZero);

    return 0;
}