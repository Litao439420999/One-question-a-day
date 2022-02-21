//编写函数对字符数组中的字母，按由大到小的顺序进行排序。

#include <stdio.h>
#include <string.h>

void  sortOfStr(char *str)
{
    int i,j,len;
    char t;

    len = strlen(str);

    for(i = 0; i < len - 1; i++ )
    {
        for(j = 0; j < len - i -1;j++)
        {
            if(str[j] < str[j+1])
            {
                t = str[j];
                str[j] = str[j+1];
                str[j+1] = t;
            }
        }
    }
}

int main(void)
{
    char str[]="this is a book!";

    sortOfStr(str);

    puts(str);

    return 0;
}
