 //移除元素

//原地移除数组中所有等于val的元素，要求不能使用额外的辅助空间，即空间复杂度为O(1)
//返回移除元素后数组的长度（暴力解法）


#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

class Solution
{
    public:
        int removeElement(vector<int> &nums, int val)
        {
            int size = nums.size();
            for(int i = 0; i < size; i++)
            {
                if(nums[i] == val)
                {
                    for(int j = i + 1; j < size; j++)
                    {
                        nums[j - 1] = nums [j];
                    }

                    i--;
                    size--;
                }
            }

            return size;
        }

        int removeArray(vector<int> &nums, int val)
        {
            int slowIndex = 0;

            for(int fastIndes = 0; fastIndes < nums.size(); fastIndes++)
            {
                if(val != nums[fastIndes])
                nums[slowIndex++] = nums[fastIndes];
            }

            return slowIndex;


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
   // find =s.removeElement(v,num);

   //35
   cout<<find;

   cout<<endl<<s.removeArray(v,num)<<endl;


    return 0;

}

