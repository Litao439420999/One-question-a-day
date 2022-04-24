#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

vector<string>  lineList;

void inputStr()
{
   ifstream  inFile("D:/km.txt", ios::in);

   if (!inFile)
   {
       cerr << "File could not be open file" << endl;
       exit(1);
   }
      
   string str;  

  
   while (getline(inFile, str, '\n'))
   {
       lineList.push_back(str);
     
   }
}

void  circshift()
{
    int i;
    vector<string> list = lineList;

    for (i = 0; i <list.size(); i++)
    {
        string  line = list[i];
        vector<string>  st ;
       
       istringstream ss(line);
        while (!ss.eof())         
        {
            string x;               
            getline(ss, x, ' ');  
            st.push_back(x);
        } 
       
        int j = 0;
        while (j < st.size()-1)
        {
            string tmp = st[0] + " ";
            st.erase(st.begin());
            st.push_back(tmp);

            string t = "" ;
            for (int k = 0; k < st.size(); k++)
                t += st[k] + " ";
           lineList.push_back(t);    

            j++;
        }   
    }
}

void  sort()
{
   
    sort(lineList.begin(), lineList.end());
}

void  output()
{
    vector<string>::iterator   it;

    for (it = lineList.begin(); it != lineList.end(); it++)
        cout << *it << endl;
}

int main()
{  
    inputStr();
    circshift();
    sort();
    cout << endl << endl;
    output();
   
    return 0;

}



