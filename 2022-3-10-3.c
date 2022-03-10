//编写函数int fun（int num，int *aa），其功能是求出小于或等于num的所有素数并放在指针变量aa指向数组中，并返回所求出的素数的个数。
#include <stdio.h>


int fun(int num, int *aa)
{
   int count = 0;
   int i,j,flag;

   for(i = 2; i <= num; i++)
   {  
	  flag=1;
      for(j = 2; j < i; j++)
	  {
		   if(i % j == 0) 
		   {
		     flag = 0; break;
		   
		   }
	  }

	  if(flag)
	  {
	    aa[count++] = i;
	  
	  }
   
   }

   return count;

}

int main(void)
{
    int x[100],num,n,i;

	printf("input num:");
	scanf("%d",&num);

	n = fun(num,x);

	printf("output prime num:\n");
	for(i = 0; i < n;i++)
		printf("%d ",x[i]);

	return 0;


}