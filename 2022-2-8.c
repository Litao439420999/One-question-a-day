//输入某一年月，输出该月的天数。
 #include <stdio.h>
 int main()
 {
 	int year,month;
 	
 	printf("请输入年份和月份：");
 	scanf("%d,%d",&year,&month);
 	
 	switch(month)
 	{
 		case 1:case 3: case 5: case 7:
		case 8: case 10: case 12: printf("%d月有31天\n",month); break;
		case 4: case 6: case 9:case 11:printf("%d月有30天\n",month); break;
		case 2: if((year%4==0 && year%100!=0) || year%400==0) 
		          printf("%d月有29天\n",month);
		        else
		          printf("%d月有28天\n",month); break;
	}

    return 0;
	  
 } 
