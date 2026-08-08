#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s;
    cin>>s;

    stack<int> st;

    for(char c:s)
    {
        if(isdigit(c))
        {
            st.push(c-'0');
        }
        else
        {//stack to lifo follow kore 
            int b=st.top();
            st.pop();

            int a=st.top();
            st.pop();

            if(c=='+') st.push(a+b);
            if(c=='-') st.push(a-b);
            if(c=='*') st.push(a*b);
            if(c=='/') st.push(a/b);
        }
    }

    cout<<st.top();
}