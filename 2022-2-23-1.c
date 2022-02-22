//编一函数，实现求3*3矩阵主对角线元素之和。函数原型如下:
int sum(int (*p)[3]);
#include<stdio.h>
int sum(int (*p)[3]) //编写该函数
{
    int i,j;
    int s = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if( i == j)
                s += *(*(p + i) + j);
                
        }
    }

    return s ;

} 
int  main()
{
	int a[3][3],(*p)[3];
	p=a;
	int i,j,c;
	for(i=0;i<3;i++)
                     for(j=0;j<3;j++)
	               scanf("%d",*(p+i)+j);
	   c=sum(p);
	   printf("sum=%d",c);

       return 0;
 
}
