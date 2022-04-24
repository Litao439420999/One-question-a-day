#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;



vector<string>  inputStr(string address)
{
   vector<string>  lineList;
   ifstream  inFile(address, ios::in);     // ifstream  inFile("D:/km.txt", ios::in);

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

   return lineList;
}


vector<string>  circshift(vector<string> &lineList)
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

    return lineList;
}

vector<string>   sort(vector<string> &lineList)
{
   
    sort(lineList.begin(), lineList.end());

    return lineList;
}

void  output(vector<string> &lineList)
{
    vector<string>::iterator   it;

    for (it = lineList.begin(); it != lineList.end(); it++)
        cout << *it << endl;
}

int main()
{  
    string  address = "D:/km.txt";
    vector<string>  stringList;
    stringList = inputStr(address);
    stringList = circshift(stringList);
    stringList = sort(stringList);
    cout << endl << endl;
    output(stringList);
   
    return 0;

}



