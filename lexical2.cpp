#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
void print(string token)
{
   unordered_set<string>s={"for","int","string"};
   if(s.find(token()))
}
string tokenizer(string s)
{
     string token;
     for(char c:s)
     {
        if(isspace(c) || c=='+' || c=='*' || c=='/' || c=='-')
        {
            if(!token.empty())
            {
                print(token);
                token.clear();
            }
            if(c!=' ')
            {
                token+=c;
                print(token);
                token.clear();
            }

        }
        else{
            token+=c;
        }
     }

     if(!token.empty())
     {
        print(token);
        token.clear();
     }
}
int main()
{
    string s;
    cout<<"enter string"<<endl;
    getline(cin,s);
    tokenizer(s);
    return 0;
}