// program to check for keyword in a given string

#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;
bool checkkeyword(string s)
{
    unordered_set<string>mp={"int","if","else","float","for","do","while","return"};

    for(int i=0; i<s.size(); i++)
    {
        for(int j=i; j<s.size(); j++)
        {
            string a=s.substr(i,j);
            if(mp.find(a)!=mp.end())
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
     string ans;
     cout<<"enter a string"<<endl;
     cin>> ans;
     if(checkkeyword(ans))
     {
        cout<<"The keyword is found in string"<<endl;
     }
     else
     {
         cout<<"The keyword is not found in string"<<endl;
     }
    return 0;
}