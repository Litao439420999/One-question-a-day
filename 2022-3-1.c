//函数fum的功能是：将a、b中的两个正整数合并形成一个新的整数放在c中。合并的方式是∶将a中的十位和个位数依次放在变量c的十位和千位上，b中的十位和个位数依次放
//在变量c的个位和百位上。
//例如，当a=45，b=12。调用该函数后，c=5241。

#include <stdio.h>

void  fun(int x, int y, int *z)
{
    *z = (x % 10) * 1000 + ( y % 10) * 100  + ( x / 10) * 10 + ( y / 10) ;
}

int main(void)
{
    int a, b, c;

    printf("input a,b:");
    scanf("a=%d,b=%d",&a,&b);

    fun(a,b,&c);
    printf("c:%d\n",c);

    return 0;

}

