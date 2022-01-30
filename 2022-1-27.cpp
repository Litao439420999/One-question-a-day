#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
 
int main(void){
    string s1 = "AAAbbb";
 
   // transform(s1.begin(), s1.end(), s1.begin(), 0, toupper);
   transform(s1.begin(), s1.end(), s1.begin(), ::toupper);//toupper可以是：函数的入口地址,函数对象,
    cout<<s1<<endl;
 
    string s2 = "AAAbbb";
    //transform(s2.begin(), s2.end(), s2.begin(), 0, tolower);
     transform(s2.begin(), s2.end(), s2.begin(), ::tolower);//toupper可以是：函数的入口地址,函数对象,
    cout<<s2<<endl;
 
    return 0;
}
 