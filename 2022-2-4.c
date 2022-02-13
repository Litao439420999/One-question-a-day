//已知一个四位数 x2y3，该数能被 23 整除，求此四位数。
#include <stdio.h>

void  findxyFun(int *num){
    int n,x,y;

    for(x = 1; x < 10; x++)
    {
        for(y = 0; y < 10; y++)
        {
            n = x*1000 + 200 + y * 10 +3;
            if( n % 23 == 0)
                *num = n;

        }
    }
}

int main(void){
    int num;
    findxyFun(&num);

    printf("一个四位数，该数能被 23 整除，此四位数%d\n",num);
    return 0;
}