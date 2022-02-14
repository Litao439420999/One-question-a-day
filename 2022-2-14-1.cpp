/*
建立一个类SUM，求二维数组外围各元素的和，并且输出数组各元素及所求之和。具体要求如下：

（1）私有数据成员

int a[4][4]：二维数组，存放要处理的数据。

int s：存放数组a外围各元素的和。

（2）公有成员函数

SUM(int b[4][4])：构造函数，用数组b初始化数组a。

void process()：求二维数组外围各元素的和s。

void print()：按行列方式输出数组a的各元素值，并输出外围各元素的和。

（3）在主函数中完成对该类的测试
*/



#include <iostream>

using namespace std;



class SUM{

    private:

        int a[4][4];  //二维数组，存放要处理的数据。

        int s;  //  存放数组a外围各元素的和。

    public:

        SUM(int b[4][4]){

            int i, j;

            for(i = 0; i < 4; i++){

                for(j = 0; j < 4; j++){

                    a[i][j] = b[i][j];

                }

            }

        }

        void process(){

            int i,j,sum=0;



            for(i = 0; i < 4; i++){

                for(j = 0; j < 4; j++){

                    if(i==0 ||j==0||i==3||j==3 )

                        sum += a[i][j];

                }

            }



            s = sum;

        }

        void  print(){

            int i,j;



            for(i = 0; i < 4; i++){

                for(j = 0; j < 4; j++){

                    printf("%5d",a[i][j]);

                   

                }

                 printf("\n");

            }

            printf("数组a外围各元素的和:%d\n",s);

        }

};



int main(void){

    int b[4][4] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};



    SUM  s(b);

    s.process();

    s.print();



    return 0;

}



 



