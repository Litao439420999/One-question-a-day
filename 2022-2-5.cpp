#include<iostream>
using namespace std;
class counter
{
    public:
        counter(int number);//给原值加 1
        void increment();//给原值减 1
        void decrement();//取得计数器值
        int getvalue();//显示计数
        void print ();
    private:
         int value;
};
counter::counter(int number){
    value = number;
}
void counter::increment(){
    value += 1;
}
void counter::decrement(){
    value -= 1;
}
int counter::getvalue(){
    return value;
}
void counter::print(){
    cout<<"value="<<value<<endl;
}
int main(void){
    counter  cn(3);

    cn.increment();
    cn.print();
    cn.decrement();
    cn.print();

    return 0;
}


