/*程序定义了N×N的二维数组，并在主函数中自动赋值。
请编写函数fun（int  （*pa）[N]，int n）。
该函数的功能是∶使数组左下半三角元素中的值乘以n。
*/

#include <stdio.h>
#define  N  3

void fun(int (*pa)[N], int n)
{
    int i,j;

    for(i = 0; i < N; i++)
    {
        for(j = 0; j <= i; j++)
        {
            *(*(pa + i) + j) *= n;
        }
    }
}

int main(void)
{
    int x[N][N]={1,9,7,2,3,8,4,5,6},i,j,n;

    printf("input n:");
    scanf("%d",&n);

    
    for(i = 0; i < N; i++)
      {
          for(j = 0; j < N; j++)
          {              
              printf("%5d",x[i][j]);
          }  

        printf("\n");

      }  

      fun(x,n);
      printf("\n");
       for(i = 0; i < N; i++)
      {
          for(j = 0; j < N; j++)
          {
             
              printf("%5d",x[i][j]);
          }  

        printf("\n");

      }  

    return 0;
    
}