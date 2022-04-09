#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch;
    char str[15];

    if((fp= fopen("d:/file1.txt","w+"))==NULL)
    {
        printf("NOT OPEN File!\n");exit(0);
    }

    ch = getchar();

    while(ch != '\n')
    {
        fputc(ch,fp) ;
        ch = getchar();
    }

    fclose(fp);

    //打开文件读取
    if((fp = fopen("d:/file1.txt","r+"))==NULL)
    {
        printf("Not Open File!\n");
        exit(0);
    }
    fgets(str,15,fp);
    puts(str);

    fclose(fp);

    return 0;
}