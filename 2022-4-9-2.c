#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[10];
    int score[3];
}STU;

int main(void)
{
    FILE *fp;
    int i;
    STU s[3];

    for(i = 0; i < 3; i++)
    {
        scanf("%s %d%d%d",s[i].name,&s[i].score[0],&s[i].score[1],&s[i].score[2]);
    }

    if((fp = fopen("e:/f2.txt","wb"))==NULL)
    {
        printf("文件打开失败！\n");
    }

    for(i = 0; i < 3; i++)
    {
       if(fwrite(&s[i],sizeof(STU),1,fp) != 1)
            printf("写入失败！\n");
    }
    fclose(fp);

    //读出数据
    if((fp=fopen("e:/f2.txt","rb"))==NULL)
    {
        printf("文件打开失败！\n");

    }
    while(fread(&s,sizeof(STU),1,fp) == 1)
    {
        printf("%s\t%d\t%d\t%d\n",s->name,s->score[0],s->score[1],s->score[2]);
    }

    fclose(fp);

    return 0;


}