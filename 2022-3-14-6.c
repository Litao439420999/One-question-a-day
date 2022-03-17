/*函数fun的功能是∶将s所指字符串中下标为偶数同时ASCII值为奇数的字符删除，s所指串中剩余的字符形成的新串放在t所指的数组中。
例如，若s所指字符串中的内容为"ABCDEFG12345"，其中字符C的ASCI码值为奇数，在数组中的下标为偶数，因此必须删除;而字符1的ASCI码值为奇数，在数组中的下标为奇
数，因此不应当珊删除，其他依此类推。最后t所指的数组中的内容应是"BDF12345"。
void  fun(char *s,char t[])
*/

#include <stdio.h>

void fun(char *s, char t[])
{
    int i ,j = 0;

   for(i = 0; s[i]!='\0';i++)
   {
       if( !(i % 2 == 0 && s[i] % 2 !=0))
       {
          t[j++] = s[i];
       }
   }

   t[j] = '\0';
}
int main(void)
{
    char s[] ="ABCDEFG12345", t[20];

    fun(s,t);

    puts(t);
    return 0;


}

