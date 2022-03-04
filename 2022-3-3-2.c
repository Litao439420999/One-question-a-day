//给定程序中，函数fun的功能是∶计算数组x中N个数的平均值（规定所有数均为正数），平均值通过形参返回给主函数，将小于平均值且最接近平均值的数作为函数值返回，并在主函数中输出。
//例如，有10个正数∶46、30、32、40、6、17、45、15、48、26，平均值为30.500000。
//主函数中输出m=30。
//请在程序的下画线处填入正确的内容并把下画线删除，使程序得出正确的结果。
#include <stdio.h>
#define N 10

double fun(double x[],double *av)
 { 
    int i,j; 
    double d,s; 
    s=0; 
    for(i=0; i<N; i++) s = s +x[i];

    *av = s/N; // 
    d=32767;
    for(i=0; i<N; i++) 
        if(x[i]<*av && *av-x[i]<=d)
        { 
         d=*av - x[i]; 
         j= i; //
        } 
     return  x[j]; // 
 }

 int main(void)
 {
     double average,x[N] ={46,30,32,40,6,17,45,15,48,26};
     double m;

     m = fun(x, &average);

     printf("average:%f,m=%.0f\n",average,m);

     return 0;
 }
