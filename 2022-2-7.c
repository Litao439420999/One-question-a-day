//读入3个分别表示箱子长、宽、高的整数值，判断并输出该箱子是立方体还是长方体。

#include <stdio.h>

int main()
{
	int l,w,h;

	printf("请输入箱子长、宽、高:\n");	
	scanf("l=%d,w=%d,h=%d",&l,&w,&h);
	
	if(l==w)
	{
	  	if(l==h)
	  	 printf("该箱子是立方体\n");
        
        
	}
	  
	else
	{
	  	 printf("该箱子是长方体\n");
	} 
 } 
