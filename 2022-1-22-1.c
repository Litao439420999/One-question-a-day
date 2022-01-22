//题目： 拉丁方阵
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
    int i,j,k;

    for(i = 1; i <= N; i++)
    {
        for(j = i; j <= N; j++)
            printf("%3d",j);
        for(k =1; k < i; k++ )
            printf("%3d", k);
        printf("\n");
    }
    return 0;
}