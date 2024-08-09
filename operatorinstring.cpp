// program to check for operator in a string

#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
bool checkoperator(string s)
{
   unordered_set<string>ms={"==","!=",">=","<=",">","<"};
   if(ms.find(s)!=ms.end())
   {
      return true;
   }
   return false;
}
int main()
{
   string s;
   cout<<"enter string"<<endl;
   cin>>s;
   if(checkoperator(s))
   {
    cout<<"valid"<<endl;
   }
   else
   {
     cout<<"Not valid"<<endl;
   }
  return 0;
}