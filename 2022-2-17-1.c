// 输入 10 个整数，然后第 1 个数和倒数第 1 个数交换，第 2 个数与倒数第 2 个数交换，依此类推，直到交换所有的数。要求：指针变量作为函数参数

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void  shiftArrayNum(int *n, int len){
    int *i,*j,t;
    
    i = n; j = n + len -1;

    for(; i < j; i++,j--)
    {
       t = *i;
       *i = *j;
       *j = t; 
    }

}

int main(void){
    int i,num[10];

    srand(time(0));
    for(i = 0; i < 10; i++)
    {
        num[i] = rand() % 100 + 20 ;
    }

    printf("输出未转换前数组元素:\n");
    for(i = 0; i < 10; i++)
        printf("%4d",num[i]);

    shiftArrayNum(num,10);

    printf("\n输出转换后数组元素:\n");
    for(i = 0; i < 10; i++)
        printf("%4d",num[i]);

    return 0;
}