//长度最小的子数组
//题目描述：在一个正整数数组a中找到最小长度的连续子数组，使子数组元素之和大于或等于s.
//返回满足条件的连续子数组的最小长度，如果没有找到则返回0；

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int minSubArrayLen(int a[],int num, int len)  //第一种方法
{
    int i,j;    
    int sum;    //子数组的元素之和
    int sublen = 0;  //子数组长度
    int result = INT_MAX;

    for(i = 0; i < len; i++)
    {
        sum = 0;

        for(j = i; j < len; j++)  //设置子数组起点为i
        {
            sum += a[j];

            if( sum >= num)
            {
                sublen = j - i + 1;        //获取子数组的长度
                result = result < sublen ? result : sublen;
                break;
            }
        }
    }

    return result == INT_MAX ? 0 : result;   // 如果result没有被赋值，则返回0,说明没有符合条件的子数组
}

int minSubArrayLenfun(int a[],int s, int len) //第二种方法
{
    int sum = 0;
    int i= 0,j;
    int sublen = 0;
    int result = INT_MAX;

    for(j = 0; j < len; j++)
    {
        sum += a[j];
        while( sum >= s)
        {
            sublen = j - i + 1;
            result = result < sublen ? result : sublen;
            sum -= a[i++];

        }

    }

    return result == INT_MAX ? 0 : result;

}

int main(void)
{
    int x[10],i,len,s;

    srand(time(0));
    for(i = 0; i < 10; i++)
        x[i] = rand() % 30 + 1;

    printf("输出数据：\n");
    for(i = 0; i < 10; i++)
        printf("%8d",x[i]);

    printf("\n输入连续数组元素之和：");
    scanf("%d",&s);

    len = minSubArrayLen(x,s,10);
    printf("\n最小长度:%d\n",len);

    len = minSubArrayLenfun(x,s,10);
    printf("\n最小长度:%d\n",len);


    return 0;

}