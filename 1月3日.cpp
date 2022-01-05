//  请写一个程序，对于一个正整数，程序给出连续素数的和的表示数
//输入：
//输入一个正整数序列，每个数一行，在2~10000之间取值。输入以0表示结束
//输出
//除了最后的0，输出的每一行对应输入的每一行。对于一个输入的正整数，输出的每一行给出连续素数的和的表示数。输出中没有其他字符。
//输入：2   输出：1
//输入：17  输出：2
//输入：20  输出：0


#include <iostream>
using namespace std;

const int maxp = 2000, n = 10000;
int prime[maxp],total = 0;

bool isprime(int k)
{
    for(int i = 0; i < total; i++)
        if( k % prime[i] == 0)
            return false;
    return true;
}

int main(void)
{
    for(int i = 2; i <= n;i++)
    if(isprime(i))
        prime[total++] = i;
    
    prime[total] = n + 1;

    int m;
    cin >> m;

    while(m)
    {
        int ans = 0;
        for(int i = 0; m >= prime[i]; i++)
        {
            int cnt = 0;
            for(int j = i; j < total && cnt < m;j++)
            cnt += prime[j];
            if(cnt == m)
            ++ans;
        }

        cout<<ans<<endl;
        cin >> m;
    }
    return 0;
}
