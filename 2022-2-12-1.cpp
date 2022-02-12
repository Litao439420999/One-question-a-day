/*1．建立一个类Prime，用来判断某整数是否为素数。具体要求如下：
（1）私有数据成员
int n：存放某个整数。
（2）公有成员函数
void set(int _n)：将数据成员n的值设置为参数_n的值。
int IsPrime()：判断数据成员n是否为素数，是素数则返回1，否则返回0。
void print()：如果n为素数（通过成员函数IsPrime判断），则输出”n is a prime number.”，否则输出”n is not a prime number.”。
（3）在主函数中对该类进行测试。
定义类Prime的对象p。
调用对象p的set成员函数，设置p的数据成员n为7。
调用对象p的print成员函数，输出判断结果。
设置p的数据成员n为9。
输出判断结果。
本程序正确的输出结果为：
7 is a prime number.
9 is not a prime number.*/
#include <iostream>
using namespace std;

class Prime{
    private:
        int n;
    public:
        void set_n(int _n){
            n = _n;
        }
        int Isprime()
        {
            int i,flag = 1;

            for(i = 2 ; i < n - 1; i++) {
                if(n % i == 0){
                    flag = 0; break;
                }
            }

            return flag;
        }
        void print()
        {
            if(Isprime()){
                cout<<n<<" is a prime number.\n";
            }
            else{
               cout<<n<<" is not a prime number.\n";  
            }


        }

};

int main(void){
    Prime  p;

    p.set_n(7);
    p.print();

    p.set_n(9);
    p.print();

    return 0;

}