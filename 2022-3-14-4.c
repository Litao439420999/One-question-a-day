/*请编写一个函数，用来删除字符串中的所有空格。
例如，输入asd af aa z67，则输出为asdafaaz67。
void  fun(char *str)
*/
#include <stdio.h>

void fun(char *str)
{
    char *p = str;
  

    while(*str != '\0')
    {
        if( *str != ' ')
         {
             *p = *str; p++;
         }

         str++;

    }
    *p = '\0';
}

int main(void)
{
    char ss[100];

    printf("input string:");
    gets(ss);

    fun(ss);
    puts(ss);

    return 0;
}
