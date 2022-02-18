//从若干个字符串中，将包含“2000”的第一个字符串找出来，并输出。

#include <stdio.h>
#include <string.h>

char *locate(char *str[], int n) //查找函数
{
    int i ;

    for(i = 0; i < n; i++){
        if(strstr(str[i],"2020")!= 0) //表达式非0,当前字符串包括“2000”字串
            return  str[i];
    }

    return 0;
}

int main(void){
    char *str[4] ={"windows","Linux","wps2020","word2020"};
    char *firstSubStr;

    firstSubStr = locate(str,4);
    puts(firstSubStr);

    return 0;
}
/* 
注意
if语句中的 strstr（）函数实现的。strstr（）是在 string.h 头文件中说明的一个库函数，
它的一般用法是 strstr（字符串1，字符串2），其中的两个参数，可以是字符串地址，也可以是一个具体的字符串。
strstr（）的功能是求字符串 2 在字符串 1 中的位置，并把这个位置序号作为函数值。
若字符串 1中不包含字符串 2 时，函数值为0。
*/

