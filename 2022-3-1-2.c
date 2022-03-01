//请编写函数void fun（intx.int p[],int *n)，它的功能是∶求出能整除x且不是偶数的各整数，并按从小到大的顺序放在pp所指的数组中，这些除数的个数通过形参n返回。
//例如，若x中的值为30，则有4个数符合要求，它们是1、3、5、15。
#include <stdio.h>
void fun(int x, int p[], int *n)
{
    int i;

    *n = 0;

    for( i = 1; i <= x; i++)
    {
         if ( x % i == 0)
         {
             if ( i % 2)
             {
                 p[(*n)++] = i;
             }
         }
    }  

}

int main(void)
{
    int i, x, num[10],count;

    printf("input x:");
    scanf("%d",&x);

    fun(x,num,&count);
    
    for(i = 0; i < count; i++)
        printf("%4d",num[i]);

    return 0;

}