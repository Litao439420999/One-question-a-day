//二分查找
//在一个有序无重复元素的数组nums中，寻找一个元素target，如果找到了就返回对应的下标，如果没找到就返回-1.
//示例
//输入：[1,2,3,4,7,9,10],2
//输出：1
//输入：[1,2,3,4,7,9,10],8
//输出:-1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int search(int a[], int target,int len)
{
    int first,end, i ,middle;

    first = 0;
    end = len - 1;

    while(first <= end)
    {
        middle = (first + end) / 2;

        if(a[middle] > target)
        {
           end =  middle - 1;
        }
        else if( a[middle] < target)
        {
            first = middle + 1;
        }
        else
            return middle; //找到
    }

    return -1; //未找到
}

void sort(int a[], int len)
{
    int i,j,t;

    for(i = 0;i < 9; i++)
    {
        for ( j = 0; j < 9 - i; j++)
            if( a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
    }
}

int main(void)
{
    int x[10],i,num;

    srand(time(0));

    for(i=0;i<10;i++)
    {
        x[i] = rand() % 300 + i;
    }

     sort(x,10);

    printf("输出数据:\n");
    for(i = 0; i < 10;i++)
        printf("%d\t",x[i]);

    printf("\n输入要查找的数据:\n");
    scanf("%d",&num);

    printf("%d\n",search(x,num,10));

    return 0;

    

}