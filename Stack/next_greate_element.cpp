#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    int ans[1000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    stack<int> st;
    for(int i=n-1;i>=0;i--)
    { 
        while(!st.empty() && st.top()<=a[i])
            st.pop();
        if(st.empty())
            ans[i]=-1;
        else
            ans[i]=st.top();
        st.push(a[i]);
    }

    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
}
/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[1000];
    int ans[1000];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        ans[i] = -1;      // Default answer

        for(int j = i + 1; j < n; j++)
        {
            if(a[j] > a[i])
            {
                ans[i] = a[j];
                break;
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";

    return 0;
}  
*/