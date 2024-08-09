#include<iostream>
#include<string>
#include<vector>

using namespace std;
void genqad(string s)
{
    vector<char>operators;
    vector<string>operands;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            continue;
        }
        if(s[i]=='+' || s[i]=='*')
        {
            operators.push_back(s[i]);
        }
        else
        {
            string operand;
            while(i<s.size() && s[i]!=' ' && s[i]!='+' && s[i]!='*')
            {
                operand+=s[i];
                i++;
            }
            i--;
            operands.push_back(operand);
        }
    }

    int temp=1;
    for(int i=0; i<operators.size(); i++)
    {
       string op1= operands[i];
       string op2=operands[i+1];
        string result="t"+to_string(temp++);
        cout<< op1 << operators[i] << op2 << result<<endl;

       operands[i+1]=result;
    } 

}
int main()
{
    string s= "a+b+c";
    genqad(s);
}