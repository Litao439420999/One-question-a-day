//题目： 拉丁方阵
//N阶拉丁方阵，就是将1~N数放入N*N的棋盘中，保证每行和每列1~N都出现一次。
//如6*6阶拉丁方阵，使方阵中每一行和每一列中数字1~6只出现一次，例如：
//1 2 3 4 5 6
//2 3 4 5 6 1
//3 4 5 6 1 2
//4 5 6 1 2 3
//5 6 1 2 3 4
//6 1 2 3 4 5
//现在请构造出所有的6*6阶的拉丁方阵，排头数字小的拉丁方阵先输出。

#include <stdio.h>
#define  N   6

int main(void)
{
    int i,j,k,t;

    printf("The possible Latin Squares of order %d are:\n",N);

    for(j = 0; j < N; j++)
    {
        for(i = 0; i < N; i++)
        {
             t = (i + j) % N; //确定该拉丁方阵第i行的第一个元素的值
             for(k = 0; k < N; k++)
             {
                 printf("%d ",(k + t) % N + 1);
             }

             printf("\n");
        }

        printf("\n");
    }

    return 0;
}
