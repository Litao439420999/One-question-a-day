//题目： 拉丁方阵(第二种方法)
//N阶拉丁方阵，就是将1~N数放入N*N的棋盘中，保证每行和每列1~N都出现一次。
//如4*4阶拉丁方阵，使方阵中每一行和每一列中数字1~4只出现一次，例如：
//1 2 3 4
//2 3 4 1
//3 4 1 2
//4 1 2 3

#include <stdio.h>
#define  N   4

int main(void)
{
    int i,j,t;

    for(i = 0; i < N; i++)
    {
        t = i % N;

        for(j = 0; j < N; j++)
        {
            printf("%3d", (t + j) % N + 1);
        }

        printf("\n");
    }

    
    return 0;
}