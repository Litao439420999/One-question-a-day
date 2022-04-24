#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

class Input
{
    private:
        vector<string>  lineList ;
    public:
        vector<string>  getLineTxt()
        {
            return lineList;
        }

       void inputLine(string fileName)
        {
             ifstream  inFile(fileName, ios::in);

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
};

class circshift
{
    private:
        vector<string>  kwList ;
        vector<string>  lineList;

    public:
    circshift(vector<string> lineList)
    {
        this->lineList = lineList;
    }

    vector<string> getLineList()
    {
        return lineList;
    }
    vector<string> getKwList()
    {
        return kwList;
    }

    void cirShift()
    {
        int i;       

        for(i = 0; i <lineList.size(); i++)
        {
            string  line = lineList[i];
            vector<string>  st ;
       
            istringstream ss(line);
            while (!ss.eof())         
            {
                string x;               
                getline(ss, x, ' ');  
                st.push_back(x);
            } 
       
            int j = 0;
            while (j < st.size())
            {
                string tmp = st[0] + " ";
                st.erase(st.begin());
                st.push_back(tmp);

                string t = "" ;
                for (int k = 0; k < st.size(); k++)
                t += st[k] + " ";
                kwList.push_back(t);    

                j++;       
            }   
        }

   } 

};

class lineSort
{
    private:
        vector<string>  kwList;
    public:
       lineSort(vector<string> kwList)
       {
           this->kwList = kwList;
       }

       vector<string> getKwList()
       {
           return kwList;
       }

       void  linsort()
       {
         
          sort(kwList.begin(),kwList.end());

       }
};

class  output
{
    private:
        vector<string> kwList;
    public:
        output(vector<string> kwList)
        {
            this->kwList = kwList;
        }

        void show()
        {
            vector<string>::iterator it;

            for(it = kwList.begin(); it != kwList.end();it++)
            {
                cout << *it << endl;
            }

        }
};

int main(void)
{
    Input in;
    in.inputLine("D:/km.txt");
    circshift cshift(in.getLineTxt());
    cshift.cirShift();
    lineSort linesort(cshift.getKwList());
    linesort.linsort();
    output  out(linesort.getKwList());
    out.show();

    return 0;
}
