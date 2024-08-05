// program to check for constant in a given string

#include<iostream>
#include<string>

using namespace std;
bool checkconstant(string s)
{
   if(s.empty())
   {
     return false;
   }
   bool hasdecimal=false;
   for(auto ch:s)
   {
      if(!isdigit(ch) && ch!='.')
      {
        return false;
      }
      if(ch=='.')
      {
         if(hasdecimal)
         {
            return false;
         }
         hasdecimal=true;
      }
   }
   return true;
}
int main()
{
     string ans;
     cout<<"enter a string"<<endl;
     cin>> ans;
     if(checkconstant(ans))
     {
        cout<<"The string is valid constant"<<endl;
     }
     else
     {
         cout<<"The string is not valid constant"<<endl;
     }
    return 0;
}