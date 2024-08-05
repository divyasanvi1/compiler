// program to check for operator in a string
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
bool isRoperator(char ch)
{
  return ch=='='||ch=='!' || ch=='<' ||  ch=='>';
}
bool isRRoperator(string s)
{
   unordered_set<string>r={"==","<=",">=","!="};
    return r.find(s)!=r.end();
}
void checkRoperator(string s)
{
        for(int i=0; i<s.size(); i++)
        {
            
             if(i+1<s.size() && isRRoperator(s.substr(i,2)))
            {
                cout<<s.substr(i,2)<<" is a relational operator";
                i++;
            }
            else if(isRoperator(s[i]))
            {
              cout<<s[i]<<" is a relational operator";
            }
        }
}
int main()
{
     string ans;
     cout<<"enter a string"<<endl;
     cin>> ans;
     checkRoperator(ans);
    return 0;
}