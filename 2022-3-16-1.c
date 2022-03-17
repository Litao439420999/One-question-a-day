/*
建立一个顺序表L1=(11,2,35,41,65,2);
1）查找元素5是否存在 
2）删除位序为3的元素 
3）输出所有元素
4）输出顺序表的长度 
5）输出元素2第一次出现的位序
*/ 
 
#include<stdio.h>
#include<stdlib.h>//malloc realloc
typedef int ElemType;    /* 在实际问题中,根据需要定义所需的数据类型 */
#define INITSIZE 100     /* 顺序表存储空间的初始分配量 */
typedef struct
{ ElemType *data;        /* 存储空间基地址 */
  int length;            /* 顺序表长度(即已存入的元素个数) */
  int listsize;      /* 当前存储空间容量(即能存入的元素个数) */
}sqlist;

/* (1)初始化操作(创建一个空的顺序表L) */
void initlist(sqlist *L)
{ 
//补充代码
 L->data =(ElemType *) malloc(sizeof(ElemType)*INITSIZE);
 L->length =1;
 L->listsize =INITSIZE;
}
/* (2)求表长操作(统计顺序表L中存储的数据元素个数) */
int getlen(sqlist *L)
{
 //补充代码  
 return(L->length -1 );
}

/* (3)取元素操作(取出顺序表L的第i个数据元素的值) */
int getelem(sqlist *L,int i,ElemType *e)
{
//补充代码  
 if(i<1||i>L->length ) return 0;
 *e=L->data[i-1];
 return *e;     // 1

}

/* (4)元素定位操作(在顺序表L中,查找第1个与x值相等的数据元素的位置) */
int locate(sqlist *L,ElemType x)
{ //补充代码  
  int i=0;
  while(i<L->length )
  if(L->data[i]==x)return i;   //
  else i++;
  return 0;

}
 
 /* (5)插入操作(在顺序表L中的第i个位序上插入一个值为x的数据元素) */
int insert(sqlist *L,int i,ElemType x)
{ int j;
  if(i<1||i>L->length+1) return 0;  /* 参数i不合理,返回0 */
  if(L->length==L->listsize)        /* 存储空间不够，增加一个存储空间 */
  {  L->data=(ElemType *)realloc(L->data,(L->listsize+1)*sizeof(ElemType));
     L->listsize++;                 /* 重置存储空间长度 */
  }
  for(j=L->length-1;j>=i;j--)
    //补充代码       /* 将序号为i及之后的数据元素后移一位 */
  L->data [j+1]=L->data [j];
  L->data[i]=x;      //  i -1             /* 在序号i处放入x */
  //补充代码  
  L->length++;               /* 顺序表长度增1 */
  return 1;                         /* 插入成功,返回1 */
}
/* (6)删除操作(将顺序表L的第i个元素删除) */
int delete(sqlist *L,int i,ElemType *e)
{ int j;
  if(i<1||i>L->length) return 0;  /* 参数i不合理,返回0 */
  *e=L->data[i-1];                /* 存储被删除的元素 */
  for(j=i;j<L->length;j++)
    //补充代码      /* 将序号为i及之后的数据元素前移一位 */
  L->data[j]=L->data [j+1];
  L->length--;                    /* 顺序表长度减1 */
  return 1;                       /* 删除成功,返回1 */
}
/* (7)输出操作(输出顺序表L的各数据元素值) */
void list(sqlist *L)
{ 
 //补充代码  
 int i;
 for(i=1;i<L->length ;i++)   // i = 1
 printf("%5d",L->data [i]);
 printf("\n");
}
void main()           /*建立一个顺序表L1=(11,2,35,41,65,2);
1）查找元素5是否存在 
2）删除位序为3的元素 
3）输出所有元素
4）输出顺序表的长度 
5）输出元素2第一次出现的位序*/ 
 
{
	sqlist q;
	initlist(&q);
	insert(&q,1,11);
	insert(&q,2,2);
	insert(&q,3,35);
	insert(&q,4,41);
	insert(&q,5,65);
	insert(&q,6,2);
	list(&q);
    if(locate(&q,5))
    printf("find\n");
    else 
    printf("no find\n");
    int n;
    if(delete(&q,3,&n))
    printf("%d 删除成功!\n",n);
	else
	printf("删除失败!\n");
	list(&q);
	printf("%d \n",getlen(&q));
	printf("%d 元素2第一次出现的位序\n",locate(&q,2));
	
}


