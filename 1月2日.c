//给出8个随机数，计算这些数中有多少个数对满足一个数是另一个数的两倍。
//比如，有下列正整数：1 4 3 2 9 7 18 22
//那么符合要求的数对有3个，因为2是1的两倍、4是2的两倍、18是9的两倍


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
    int i,j, count, a[8];

    srand(time(0));

    for(i=0;i<20;i++)
        a[i] = rand() % 50 + 1;

    count = 0;

    for(i=0;i<7;i++)
    {
        for(j= i + 1; j< 8; j++)
        {
            if( a[i]== a[j] * 2 || a[i] * 2 == a[j])
                count++;
        }
    }

    cout<<"count="<<count<<endl;

    for(i=0;i<8;i++)
        cout<<a[i]<<"\t";
    cout<<endl;


    return 0;

}
