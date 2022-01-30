#include<iostream>
#include<string>
#include<cstring>
using namespace std;
 
int main(void)
{
    //字符串的查找和替换
    string s1 = "wbm hello wbm 111 wbm 222 wbm 333";
 
    //1、第一次出现wbm的下标
    int index = s1.find("wbm", 0); 
    cout<<"index :"<<index<<endl;
 
    //2、求wbm每一次出现的数组下标
 
    /*  int offindex = s1.find("wbm", 0);
    while(offindex != -1){
        cout<<"offindex :"<<offindex<<endl;
        offindex += strlen("wbm");
        offindex = s1.find("wbm", offindex);
    }*/
 
    //3、把小写wbm换成大写
    int offindex = s1.find("wbm", 0); 
    while(offindex != -1)
    {
        cout<<"offindex :"<<offindex<<endl;
        s1.replace(offindex, strlen("wbm"), "WBM"); //从下标offindex开始,删除n个字符,替换为后面的字符;
        offindex += strlen("wbm");
        offindex = s1.find("wbm", offindex);
    }
    cout<<"s1:"<<s1<<endl;
 
    string s3 = "aaa bbb ccc";
    s3.replace(0, 3, "AAA");  //替换的函数;
    cout<<"s3:"<<s3<<endl;
 
    return 0;
}