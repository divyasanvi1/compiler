//program to check string under a given grammer
#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValidString(string &str)
{
    stack<char> s;
    for( auto ch: str)
    {
        if(ch=='a')
        {
            s.push(ch);
        }
        else if(ch=='b')
        {
            if(s.empty())
            {
                return false;
            }
            s.pop();
        }
        else{
             return false;
        }
    }
    return s.empty();
}
int main()
{
     string ans;
     cout<<"enter a string"<<endl;
     cin>> ans;
     if(isValidString(ans))
     {
        cout<<"The string is valid for given grammer"<<endl;
     }
     else
     {
         cout<<"The string is not valid for given grammer"<<endl;
     }
     return 0;
}
