//输入一串字符，统计它的字符总数和其中大写字母的个数(不用字符串函数)。
#include <stdio.h>

int countOfCharacter(char *str, int *bigCharNum){
    int count = 0,n = 0;

    while(*str!='\0'){
        if(*str <= 'Z' && *str >= 'A')
            (*bigCharNum)++;
        count++;
        str++;
    }
    
    return count;
}

int main(void){
    char str[30];
    int  num = 0,count;

    printf("input string:");
    gets(str);

    count = countOfCharacter(str,&num);
    printf("字符总数:%d,其中大写字母的个数:%d\n",count,num);

    return 0;
}