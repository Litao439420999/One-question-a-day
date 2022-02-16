#include <stdio.h>
int main(void)
{
    int i,n, x,count = 0;


    
    for(i = 0; i < 2021; i++){
         n = i;
         while(n){
             x = n % 10;
             if( x == 2){
                 count++;               
             }
             n /= 10;
         }
    }

    printf("count:%d\n",count);
}