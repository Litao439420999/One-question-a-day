//请编写函数fun，该函数的功能是∶判断字符串是否为回文，若是，则函数返回1，主函数中输出"YES"，否则返回0，主函数中输出"NO"。回文是指顺读和倒读都一样的字符串。
//例如，字符串LEVEL是回文，而字符串123312就不是回文。
//int fun(char *str)

#include <stdio.h>
#include <string.h>

int fun(char *str)
{
   char  *start,*end;
   int len,flag=1 ;

   len = strlen(str);
   start = str;
   end =  str + len -1;

   while( start < end)
   {
         if(*start++ != *end--)
         {
             flag = 0;break;
         }
       
   }

   return flag;

}

int main(void)
{
    char ss[100];
    

    printf("input string:");
    gets(ss);

    if(fun(ss) == 1)
        printf("Yes\n");
    else
        printf("No\n");
    //puts(ss);

    return 0;
}