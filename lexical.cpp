#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;


void printtoken(string token)
{
    if(token.empty())
    {
        return;
    }
    unordered_set<string>ms={"int","float","char","string"};
    if(ms.find(token)!=ms.end())
    {
        cout<<"keyword :"<<token<<endl;
        return;
    }
    bool hasNum=true;
    for(char c:token)
    {
       if(!isdigit(c))
       {
          hasNum=false;
          break;
       }
    }
    if(hasNum)
    {
        cout<<"Number: "<<token<<endl;
    }
    else if(isalpha(token[0]) || token[0]=='_')
    {
        cout<<"identifier :"<<token<<endl;
    }
    else if(token=="="||token=="+" || token=="-" || token=="*" || token=="/")
    {
        cout<<"operator :"<<token<<endl;
    }
    else
    {
        cout<<"unknown";
    }
}
void tokenizer(string s)
{
    string token;
     for(char c:s)
     {
        if(isspace(c)|| c=='+'|| c=='-' || c=='/' || c=='*')
        {
            if(!token.empty())
            {
                printtoken(token);
                token.clear();
            }
            else if(c!=' ')
            {
                 token+=c;
                 printtoken(token);
                token.clear();
            }
        }
        else
        {
            token+=c;
        }
     }

     if(!token.empty())
     {
        printtoken(token);
         token.clear();
     }
}
int main()
{
    string s;
    cout<<"enter"<<endl;
    getline(cin,s);
    tokenizer(s);
    return 0;
}