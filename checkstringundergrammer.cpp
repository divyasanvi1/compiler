//program to check string under a given grammer

#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool checkstring(string s)
{
    int n=s.size();
    stack<char>p;
    if(n==0)
    {
        return true;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            p.push('a');
        }
        else if(s[i]=='b')
        {
            if(p.empty())
            {
                return false;
            }
            p.pop();
        }
        else
        {
            return false;
        }
    }
    return p.empty();
}

int main()
{
    string s;
     cout<<"Enter string :"<<endl;
    cin>>s;
    if(checkstring(s))
    {
         cout<<"The string is valid"<<endl;
    }
    else
    {
        cout<<"The string is not valid"<<endl;
    }
   return 0;
}
//grammer=s->asb|ss|e