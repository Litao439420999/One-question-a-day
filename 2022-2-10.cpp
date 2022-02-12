/*设一个类的定义如下：
   class T
{
   private:
   char *p1,*p2;
   public:
     void init(char *s1,char *s2);
     void print()
     { cout<<”p1=” <<p1<<’\n’<<”p2=” <<p2<’\n’ ; }
     void copyT(T &t);
     void freeT() ;
    } ;
   成员函数init将s1和s2所指向的字符串分别送到p1和p2所指向的动态申请的内存空间，
   函数copyT将对象t中的两个字符串拷贝到当前的对象中，freeT释放p1和p2所指向的动态分配的空间。
   设计一个完整的程序，包括完成这四个函数的定义和测试。*/
#include <iostream>
#include <cstring>
using namespace std;

class T
{
    private:
        char *p1,*p2;
    public:
        void init(char *s1,char *s2);
        void print()
        { cout<<"p1="<<p1<<'\n'<<"p2="<<p2<<'\n'; }
        void copyT(T &t);
        void freeT();
};
void T::init(char *s1, char *s2)
{   
    int len1,len2;
    len1 = strlen(s1);
    len2 = strlen(s2);
    p1 = new char[len1+1];
    p2 = new char[len2+1];
    
    strcpy(p1,s1);
    strcpy(p2,s2);   
}
void T::freeT()
{
    if(p1!=NULL)
        delete[]  p1;
    if(p2!=NULL)
        delete[] p2;  
         
}

void T::copyT(T &t)
{

    p1 = t.p1;
    p2 = t.p2;
    cout<<"copy succeed!\n";
}

int main(void)
{
    char ch1[] ="C++ study ";
    char ch2[] ="in  school!";

    T Object;
    Object.init(ch1,ch2);
    Object.print();

    T obj;
   obj.copyT(Object);
   obj.print();

   Object.freeT();
   Object.print();

   return 0;

}
