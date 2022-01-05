//Larry今年毕业，找到了工作，也赚了很多钱，但Larry总感觉钱不够用。于是，Larry准备用财务报表来解决他财务问题：他要计算自己能用多少钱。现在可以通过
//Larry的银行账户看到他的财务状况。请你帮Larry写一个程序，根据他过去12个月每个月的收入计算要达到收支平衡，每个月平均能用多少钱。
//输入
//输入12行，每一行是一个月的收入，收入的数字是正数，精确到分，没有美元符号。
//输出
//输出一个数字，该数字是这12个月的平均值。精确到分，前面没有美元符号，后面加行结束符。在输出中没有空格或其他字符。

#include <iostream>
using namespace std;

int main(void)
{
    double avg,sum=0.0,a[12]={0};
    int i;

    for(i=0; i<12; i++)
    {
        cin>>a[i];
        sum += a[i];

    }

    avg = sum / 12;
    printf("$%.2f\n",avg);

    return 0;
}
