/*建立一个类ARRAY，求一维数组中各元素的最大值、最小值和平均值。具体要求如下：
（1）私有数据成员
float data[10]：存储待处理的数组元素。
float max：存储数组中元素的最大值。
float min：存储数组中元素的最小值。
float average：存储数组中元素的平均值。
（2）公有成员函数
init(float a[10])：初始化数组data。
void process()：将数组data中的最大值、最小值和平均值分别存入max、min、average中。
void print()：屏幕输出数组中各元素（每行输出5各元素）及其最大值、最小值和平均值。
（3）在主函数中定义一个具有10个元素的数组a，其初值为{3.0, 4, 5, 2, 1, 10, 5.5, 7.5, 8, 9}。定义一个ARRAY类的对象arr，并用a数组初始化该对象。通过arr调用成员函数，求出并输出结果。本程序正确的输出结果为：
   3    4    5   2   1
   10  5.5  7.5   8   9
   max=10
   min=1
   average=5.5
*/
#include <iostream>
using namespace std;

class ARRAY
{
    private:
        float data[10];
        float max;
        float min;
        float average;
    public:
        void init(float a[10])
        {
            for(int i = 0; i < 10; i++)
            {
                data[i] = a[i];
            }
        }
        void process()
        {
            int i;
            float sum = 0;
            max = min = data[0];

            for(i = 0; i < 10; i++)
            {
                if(max < data[i])
                    max = data[i];

                if(min < data[i])
                    min = data[i];

                sum += data[i];    
                 

            }

            average = sum / 10;
        }

        void print()
        {
            int i;

            for(i = 0 ; i < 10 ; i++)
            {
                if((i+1)%5==0)
                    cout<<data[i]<<endl;
                else
                   cout<<data[i]<<" ";
            }

            cout<<"max="<<max<<"\nmin="<<min<<endl<<"average="<<average<<endl;          
           
        }
};
int main(void)
{
    float  a[10] ={3.0, 4, 5, 2, 1, 10, 5.5, 7.5, 8, 9};
    ARRAY arr;

    arr.init(a);
    arr.process();
    arr.print();

    return 0;
}