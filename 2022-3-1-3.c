//请编写函数fun，其功能是∶找出一维整型数组元素中最大的值及其所在的下标，并通过形参传回。数组元素中的值已在主函数中赋予。
//主函数中x是数组名，n是x中的数据个数，max存放最大值，index存放最大值所在元素的下标。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fun(int x[], int n, int max, int *index)
{
    int i;
    max = x[0];

    for(i = 1; i < n; i++)
    {
        if(x[i] > max)
        {
            max = x[i];
            *index = i;
        }
    }

    return max;
}

int main(void)
{
    int x[10],i,max,index;

    srand(time(0));
    for(i = 0; i < 10; i++)
        x[i] = rand() % 30;

    for(i = 0; i < 10; i++)
        printf("%5d",x[i]);

    max =fun(x, 10, max,&index);
    printf("\nmax:%d\tindex:%d\n",max, index);

    return 0;

}