// program to check for constant in a given string

#include <iostream>
#include <string>

using namespace std;
bool checkcons(string s)
{
   if(s.size()==0)
   {
      return false;
   }
   bool hasdecimal=false;
   for(int i=0; i<s.size(); i++)
   {
       if((!isdigit(s[i])) && s[i]!='.')
       {
           return false;
       }
       else if(s[i]=='.')
       {
           if(hasdecimal==true)
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
   string s;
   cout<<"enter s"<<endl;
   cin>>s;
   if(checkcons(s))
   {
      cout<<"constant"<<endl;
   }
   else
   {
       cout<<"Not constant"<<endl;
   }
   return 0;
}