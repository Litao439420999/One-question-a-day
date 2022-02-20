//3、编程。处理学生成绩，其功能包括输入学生学号、姓名和成绩，按成绩由低到高的顺
//序输出，对前40%的学生定为不合格（NOPASS），其余的学生定为合格（PASS）。

#include  <stdio.h>
#include  <string.h>
#define N  10

typedef  struct 
{
    int No;
    char name[10];
    float score;
    char grade[10];
}Stu;

int main(void)
{
    int i,j;
    Stu  s[N], tmp;

    printf("input data:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d:",i+1);
        scanf("%d%s%.1f",&s[i].No,s[i].name,&s[i].score);
    }
   
    //排序
    for(i = 0; i < N -1; i++)
    {
        for(j = 0; j < N - i - 1; j++)
        {
            if(s[j].score > s[j+1].score)
            {
                tmp = s[j];
                s[j] = s[j+1];
                s[j+1] = tmp;

            }
        }
    }


    for(i = 0; i < N; i++)
    {
        if ( i < N * 0.4)
            strcpy(s[i].grade,"NOPASS");
        else
            strcpy(s[i].grade,"PASS") ;

    }

    //输出数据：
    for(i = 0; i < N; i++)
    {
       printf("No: %d\nname:%s\nscore:%f\t%s\n",s[i].No,s[i].name,s[i].score,s[i].grade);
    }

    return 0;
}



