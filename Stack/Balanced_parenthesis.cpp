#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> st;

    bool found = true;

    for(char c : s)
    {
        if(c=='(' || c=='{' || c=='[')
            st.push(c);

        else
        {
            if(st.empty())
            {
                found=false;
                break;
            }

            if(c==')' && st.top()!='(')
                found=false;

            else if(c=='}' && st.top()!='{')
                found=false;

            else if(c==']' && st.top()!='[')
                found=false;

            if(!found) break;

            st.pop();
        }
    }

    if(!st.empty()) found=false;

    if(found)
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
}