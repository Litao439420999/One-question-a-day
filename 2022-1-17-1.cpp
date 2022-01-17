//反转字符串

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void  swap(vector<char> &s)
{
    int i = 0;
    int j = s.size() - 1;

    char tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
}

void reverseString(vector<char> &s)
{
    for(int i = 0, j = s.size() - 1; i < j ; i++, j--)
        swap(s[i],s[j]);
}

int main(void)
{
    vector<char>  sample;

    sample.push_back('a');
    sample.push_back('b');
    sample.push_back('c');
    sample.push_back('d');
    sample.push_back('e');
    sample.push_back('f');

    reverseString(sample);

    vector<char> :: iterator  ita;

    for(ita = sample.begin(); ita != sample.end(); ita++)
        cout<< *ita ;

    cout<<endl;


}