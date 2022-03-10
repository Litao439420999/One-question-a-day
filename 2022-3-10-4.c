//2.请编写一个函数void fun（int m int k int *xx)，该函数的功能是∶将大于整数m且紧靠m的k个素数存入指针xx所指的数组中。
//例如，若输入17，5，则应输出19、23、29、31、37。

#include <stdio.h>

void fun(int m, int k , int *xx)
{
	int i,j,count = 0,flag ;

	for( i = m + 1; ; i++)
	{     flag = 1;
	   for(j = 2; j < m; j++)
	   {
	      if( i % j == 0)
		  { flag = 0;break;}
	   }

	   if(flag)
	   {
	     xx[count++] = i;
	   
	   }

	   if(count == k) break;

	
	}

}

int main(void)
{
   int  i, x[10],num,k;

   printf("input num,k:\n");
   scanf("%d%d",&num,&k);

   fun(num,k,x);

   for(i = 0; i < k; i++)
	   printf("%d ",x[i]);

   return 0;


}