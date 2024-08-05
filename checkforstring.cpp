// program to check for identification for a given string

#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;
bool checkkeyword(string s)
{
    unordered_set<string>mp={"integer","ifelse","variable","while","for","do","decimal","return"};

            if(mp.find(s)!=mp.end())
            {
                return true;
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
        cout<<"The string is found"<<endl;
     }
     else
     {
         cout<<"The string is not found"<<endl;
     }
    return 0;
}