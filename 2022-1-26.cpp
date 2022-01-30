#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main(void){
    //区间删除和插入
    string s1 = "hello1 hello2 hell03";
    string::iterator it = find(s1.begin(), s1.end(), 'l');
    if(it != s1.end())
    {
        s1.erase(it); //删除算法;
    }   
    cout<<"s1 :"<<s1<<endl;
 
    s1.erase(s1.begin(), s1.end()); //删除从pos开始的n个字符;
    cout<<"s1全部删除:"<<s1<<endl;
    cout<<"s1的长度:"<<s1.length()<<endl;
 
    string s2 = "BBB";
    s2.insert(0, "AAA");  //头插法
    s2.insert(s2.length(), "CCC");//尾插法
    cout<<s2<<endl;
 
 
    return 0;
}
