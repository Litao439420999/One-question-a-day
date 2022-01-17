//题目描述
//分段反转字符串，在字符串中，从前向后遍历，每隔2k个字符前K个字符需要反转，如果剩下的字符小于K个,则反转剩下的所有字符，如果剩下的字符小于2k且大于或等于k个，
//则反转前k个字符。
//【示例一】
//输入：s="asdfghjkl", k=3。
//输出: "dsafghlkj"
//【示例二】
//输入：s="asdfghjk", k=3。
//输出: "dsafghkj"
//【示例三】
//输入：s="asdfghjklw", k=3。
//输出: "dsafghlkjw"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution
{
   public:
     string  reverseStr(string s, int k)
     {
         for(int i = 0; i < s.size(); i += (2 * k))
         {
             //每隔2k个字符的前k个字符进行反转
             //剩余字符小于2k但大于或等于k个，则反转前k个字符
             if (i + k <= s.size())
             {
                 reverse(s.begin() + i, s.begin() + i + k);
                 continue;
             }

             //如果剩余少于k个字符，则将剩余的字符全部反转
             reverse(s.begin() + i, s.begin() + i + k);
         }

         return s;
     }
};

int main(void)
{
    string  s("asdfghjkl"),s2;

     Solution s1;
     s2 = s1.reverseStr(s,3);

    cout << s2;
    return 0;
}