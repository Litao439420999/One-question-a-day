//输入某书店购进图书的单价和数量，输出清单并统计总金额。
#include <stdio.h>

typedef struct
{
    float price;
    int num;
}Bk;

int main(void)
{
    Bk sb[6];
    int i;
    float sum = 0;

    printf("input data:\n");
    for(i = 0; i < 6; i++)
    {
        printf("%d:",i+1);
        scanf("%f%d",&sb[i].price,&sb[i].num);
    }

   printf("\n");
   for(i = 0; i < 6; i++)
   {
       printf("price:%.1f\tnum:%d\n",sb[i].price,sb[i].num);
       sum += sb[i].price * sb[i].num;
   }

   printf("总金额：%.1f\n",sum);

   return 0;
}

