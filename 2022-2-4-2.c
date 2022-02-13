#include <stdio.h>

int  findxyFun(int *num){
    int n,x,y,i=0;

    for(x = 1; x < 10; x++)
    {
        for(y = 0; y < 10; y++)
        {
            n = x*1000 + 200 + y * 10 +3;
            if( n % 23 == 0)
             {
                 *(num+i) = n;
                 i++;                

             }   

        }
    }

    return i;
}

int main(void){
    int num[10] ,n, i;
    n = findxyFun(num);
 
    for(i = 0; i < n ; i++)
        printf("能被 23 整除，此四位数%d\n",num[i]);
    return 0;
}