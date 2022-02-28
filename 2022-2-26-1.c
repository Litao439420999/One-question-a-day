#include <stdio.h>

int railfact(int n ,int a)
{
    if(n < 0)
        return 0;
    else if( n == 0)
        return 1;
    else if( n == 1)
        return a;
    else
         return railfact(n-1,n*a);
        
}

int main(void)
{
  int n,s;

  printf("input n:");
  scanf("%d",&n);

  s =  railfact(n,1); 
  printf("result:%d\n",s);

  return 0;

}