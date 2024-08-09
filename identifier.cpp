// identifier in a string

#include<iostream>
#include<string>

using namespace std;

bool checkidentifier(string s){
   if(s.size()==0)
   {
      return false;
   }

   if(!(isalpha(s[0])) && s[0]!='_')
   {
      return false;
   }
   
   for(int i=1; i<s.size();i++)
   {
       if(!(isalnum(s[i]))&& s[i]!='_')
       {
            return false;
       }
   }
   return true;
}

int main()
{
    string s;
    cout<<"enter s"<<endl;
    cin>>s;
    if(checkidentifier(s))
    {
        cout<<"valid identifier"<<endl;
    }
    else
    {
        cout<<"invalid identifier"<<endl;
    }
    return 0;
}