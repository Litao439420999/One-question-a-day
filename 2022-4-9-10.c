#include <stdio.h>
#include <string.h>
#define N 10

typedef struct person
{
     char name[20];
     int count;
}M;

int main(void)
{
    M leader[4] = {{"wang",0},{"zhang",0},{"zhou",0},{"gao",0}};
    char name[20];
    int i,j;

    for(i=0;i<N;i++)
    {
        gets(name);
        for(j=0;j<4;j++)
        {
            if(strcmp(name,leader[j].name)==0)
            {
              leader[j].count++; break;  
            } 
        }
    }

    printf("\n");
    for(j=0;j<4;j++)
        printf("%s:%d\n",leader[j].name,leader[j].count);

    return 0;
}

