#include <iostream>
using namespace std;

struct{
    char a; //0->1（7），1还没占
    double b; //偏移的是0->7总共8个字节是8的整数倍，占8->16，16还没占
    short c; //16->18，18还没占 总共0-17
} test1;

struct{
    char a; //0->2，2还没占
    int b; //4->8  8还没占
    short c; //8->10（12），10还没占，补充到0-11
} test2;

struct{
    char a; //0->1
    short c; //2->4
    int b; //4->8
} test3;

struct{
    int b; //0->4
    char a; //4->5
    short c; //跳过0-5，6->8，8还没占
} test4;

struct{
    int number;             //0->4
    union UBffer
    {
        char buffer[13];    //4->17 17还没占
        int number;
    }ubuf;
    int aa;                 //17开始的话，偏移了0-16 = 17不行，得偏移20个字节，所以0->20  20还没占,所以当前占20->24
    double dou;             //24->32   0--31
}test5;

struct {
    short number;  // 0->8
    union UBffer
    {
        char buffer[13];  //相当于偏移了0-7，8没占，8->21，21还没占，但是为了内存补齐规则3，必须得是8->24,24没占
        double number;
    }ubuf;
}test6;

struct {
    short number;  // 0->8
    union UBffer
    {
        char buffer[13];  //相当于偏移了0-7，8没占，8->21，21还没占，但是为了内存补齐规则3，必须得是8->24,24没占
        double number;
    }ubuf;
    char a;   //24->32
    double b; //32->40  所以最后是0-39 占用40个B
}test7;

int main(void)
{
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(short) = " << sizeof(short) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(float) = " << sizeof(float) << endl;
    cout << "sizeof(long) = " << sizeof(long) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;

    cout << sizeof(test1) << endl;  // 24
    cout << sizeof(test2) << endl;  // 12
    cout << sizeof(test3) << endl;  // 8
    cout << sizeof(test4) << endl;  // 8
    cout << sizeof(test5) << endl;  // 32
    cout << sizeof(test6) << endl;  // 24
    cout << sizeof(test7) << endl;  // 40

    return 0;
}
