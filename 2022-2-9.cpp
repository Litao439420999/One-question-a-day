/*1．建立一个类PrimeNUM，求指定数据范围内的所有素数（质数）。具体要求如下：
（1）私有数据成员
int data[25]：依次存放在指定范围内求出的所有素数。
int low，high：存放指定的数据范围的下限和上限。
int num：存放low与high之间的素数个数。
（2）公有成员函数
PrimeNUM(int _low，int _high)：构造函数，用参数_low和_high初始化low和high，同时初始化num。
int isprime(int x)：判断x是否为素数。若是素数，返回1；否则，返回0。
void process()：求指定范围内的所有素数，把它们依次存放在数组data中，并将求出的素数个数赋给num。
void print()：输出求出的素数个数及所有素数，每行输出5个素数。
（3） 在主函数中对该类进行测试。定义一个PrimeNUM类的对象test，指定查找范围为100～150，即求100至150之间的所有素数。通过test调用成员函数完成求素数及输出素数的工作。本题正确的输出结果应为:
num=10
101          103           107          109           113
127	       131           137          139           149
*/
#include <iostream>
using namespace std;

class PrimeNUM{
    private:
        int data[25];
        int low,high;
        int num;
    public:
        PrimeNUM(int _low,int _high)
        {
            low = _low; high = _high; num = 0;
        } 

        int isprime(int x) 
        {
            int i,flag = 1;

            for(i = 2; i < x; i++)
            {
                if( x % i == 0)
                {
                    flag = 0; break;
                }
            }

            return flag;
        }
        void process()
        {
            int i, n; 

            i = 0;

            for(n = low;n <= high; n++)
            {
                if(isprime(n))
                {
                    data[i++] = n;
                }
            }

            num = i;
        } 
        void print()
        {
            int i;

            cout<<"num="<<num<<endl;

            for(i = 0 ; i < num; i++)
            {
                if((i + 1) % 5 == 0)
                    cout<<data[i]<<endl;
                else
                    cout<<data[i]<<" ";
            }
        }

};

int main(void)
{
    PrimeNUM test(100,150);

    test.process();
    test.print();

    return 0;
}