/*下列程序定义了N×N的二维数组，并在主函数中自动赋值。请编写函数fun(int a[][N])，
该函数的功能是∶将数组左下半三角元素中的值全部置成0。
例如a数组中的值为∶
1 9 7
2 3 8 
4 5 6
则返回主程序后a数组中的值应为∶
0  9  7 
0  0  8 
0  0  0
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  N  3

void fun(int (*pa)[N])
{
    int i,j;

    for(i = 0; i < N; i++)
    {
        for(j = 0; j <= i; j++)
        {
            *(*(pa + i) + j) = 0;
        }
    }
}

int main(void)
{
    int x[N][N],i,j;

    srand(time(0));

    for(i = 0; i < N; i++)
      {
          for(j = 0; j < N; j++)
          {
              x[i][j] = rand() % 80;
              printf("%5d",x[i][j]);
          }  

        printf("\n");

      }  

      fun(x);
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