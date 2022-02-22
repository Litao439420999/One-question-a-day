//请建立一个学生成绩数组然后调用一个fun函数用于查询该数组中一门课程以上不及格的学生并打印他们全部课程的成绩。(要求利用行指针作为函数的传递参数)。
//(1) 提供部分代码如下，并请完成其他全部代码：
#include <stdio.h>
#define M 3
#define N 4

int  main()
 {   
	void fun(float (*p)[N], int  n); 
	float stu[M][N]={{68,90,66,80},{56,78,80,90},{50,68,56,98}};
	
    fun(stu,M);
	return 0;
 }
void fun(float (*p)[N],int n)    //编写函数           
{   
   int i, j,nopass = 0;

   for(i = 0; i < n; i++)
   {
	   for(j = 0; j < N; j++)
	   {
		   //if( *(*(p+i)+j) < 60)
		   	 if(p[i][j] < 60)
			  {	nopass = 1;break;}
	   }

	   if(nopass)
	   {
			for(j = 0; j < N; j++) 
			 	printf("%6.1f", *(*(p+i)+j));  
			printf("\n");
	   }
   }

   
}
 
