#include<iostream>
#include<vector>

using namespace std;
class Stack{
    public:
    vector<int>data;
    void push(int value)
    {
        data.push_back(value);
    }

    void pop()
    {
        if(!data.empty())
        {
            data.pop_back();
        }
        else
        {
            cout<<"stack underflow"<<endl;
        }
    }

    int top()
    {
        if(!data.empty())
        {
            return data.back();
        }
        else
        {
           return 0;
        }
    }

    bool empty()
    {
        return data.empty();
    }

    int size()
    {
        return data.size();
    }
};
int main()
{
     Stack st;
     st.push(1);
     st.push(2);
     st.push(3);

     cout<<"size"<<st.size();
     while(!st.empty())
     {
        cout<<"top element"<<st.top()<<endl;
        st.pop();
     }
     cout<<st.empty()<<endl;
    return 0;
}