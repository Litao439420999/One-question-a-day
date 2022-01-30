#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
 
int main(void)
{  
//string的初始化,在C++中字符串是一种数据类型;
    string s1 = "abcdefg";
    string s2("abcdefg");
    string s3(s2);
    string s4 = s1;  //调用拷贝构造函数;
    string s5(10, 'a');//10个空间中的字符都是'a';
    s5 = s1; 
 
    cout<<"s3:"<<s3<<endl;
    cout<<"s5:"<<s5<<endl;
 
    //string的遍历;
    //1、数组方式遍历[]
    for(int i = 0; i < s1.length(); i++)
    {
        cout<<s1[i]<<" ";  //出现错误(下标越界),不会向外面剖出异常,引起程序的中断;
    }   
    cout<<endl;
    //2、迭代器
    string::iterator it; 
    for(it = s1.begin(); it != s1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //3、函数at()遍历
    for(int i = 0; i < s1.length(); i++)
    {
        cout<<s1.at(i)<<" "; //会剖出异常,合理的解决下标越界;
    }
    cout<<endl;
 
    //字符指针和string的转换
    //此时,把s1====>char * 把内存首地址给露出来;
    printf("s1:%s \n", s1.c_str());
 
    //s1中的内容拷贝到buf中;
    char buf[123] = {0};
    s1.copy(buf, 2, 0);//n, pos;下标从0开始拷贝2个字符到buf中,不会是C风格的,注意自己加上0结束标志;
    cout<<buf<<endl;
 
    //string子符串的连接
    s1 = s1 + s2; //直接+就表：字符串的连接;
    s1 += s2; //+=也是字符串的连接;
 
    s1.append(s4); //调用方法append()也是字符串的连接;
 
    cout<<s1<<endl;       
 
    return 0;
}
 