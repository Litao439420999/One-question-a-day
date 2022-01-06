//移除元素
//原地移除数组中所有等于val的元素，要求不能使用额外的辅助空间，即空间复杂度为O(1)
//返回移除元素后数组的长度
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int removeArray(int a[],int num, int len)
{
    int i,j=0;

    for(i = 0; i < len; i++)
    {
        if(a[i] != num)  
           a[j++] = a[i];
    }

    return  j;

}

int main(void)
{
    int x[10],i,j,size;

    srand(time(0));
    for(i = 0; i < 10; i++)
        x[i] = rand() % 30 + 10;

    printf("输出数据:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%5d",x[i]);
    }

    printf("\n输入要移除的数据:\n");
    scanf("%d",&j);
  
    size = removeArray(x,j,10);

    printf("size:%d\n",size);

    return 0;
    
}