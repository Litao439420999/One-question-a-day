//二分查找
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

class Solution
{

    public:
        int search(vector<int> &nums, int target)
        {
            int left = 0;
            int right = nums.size() - 1;

            while(left <= right)
            {
                // int middle = (left + right) / 2;
                int middle = left + ((right - left) / 2);
                 if(nums[middle] > target)
                 {
                     right = middle -1;
                 }
                 else if( nums[middle] < target)
                 {
                     left = middle + 1;
                 }
                 else
                   return middle;

            }

            return -1; //没有找到返回-1
        }


};

int main(void)
{
    vector<int> v;
    const int n = 10;
    int i,num,find;

    srand(time(0));
    for(i = 0;i < n; i++)
        v.push_back(rand() % 200 + 10);

    vector<int>:: iterator  it;
    sort(v.begin(),v.end());
    
    cout<<"显示数据:\n";
    for(i = 0; i < n; i++)
        cout<<v[i]<<"\t";

    
    

    cout<<endl<<"输入要查找的数据：";
    cin>>num;

    Solution    s;
    find =s.search(v,num);

   cout<<find;


    return 0;






}