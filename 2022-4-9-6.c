//定义一个结构体类型，其成员包括∶职工号、姓名、工龄、工资，定义一个具有三个元素的结构体数组，
//从键盘输入每个结构体元素所需的数据，然后输出工龄最长的职工的记录。

#include <stdio.h>

typedef struct  guyuan
{
    int id;
    char name[20];
    int  workyear;
    double money;
}GY;

int main(void)
{
    GY  s[3],max;
    int i;

    for(i = 0; i < 3; i++)
    {
        scanf("%d %s%d%lf",&s[i].id,s[i].name,&s[i].workyear,&s[i].money);
    }

   max = s[0];
    for(i = 1; i < 3; i++)
    {
        if(max.workyear < s[i].workyear)
        {
            max = s[i];
        }
    }

    printf("\n职工号:%d\t姓名:%s\t工龄:%d\t工资:%.1f\n",max.id,max.name,max.workyear,max.money);

    return 0;

}


