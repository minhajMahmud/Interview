#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    stack<int> st;
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        int current;
        if (i == n)
            current = 0;
        else
            current = arr[i];
        while (!st.empty() && arr[st.top()] > current) {
            int height = arr[st.top()];
            st.pop();
            int width;
            if (st.empty())
                width = i;
            else
                width = i - st.top() - 1;
            ans = max(ans, height * width);
        }
        st.push(i);
    }
    cout << ans;
    return 0;
}

/*
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int h[1000];
    int left[1000];
    int right[1000];

    for(int i=0;i<n;i++)
        cin >> h[i];

    stack<int> st;

    // Previous Smaller Element
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && h[st.top()] >= h[i])
            st.pop();

        if(st.empty())
            left[i] = -1;
        else
            left[i] = st.top();

        st.push(i);
    }

    while(!st.empty())
        st.pop();

    // Next Smaller Element
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && h[st.top()] >= h[i])
            st.pop();

        if(st.empty())
            right[i] = n;
        else
            right[i] = st.top();

        st.push(i);
    }

    int maxArea = 0;

    for(int i=0;i<n;i++)
    {
        int width = right[i] - left[i] - 1;
        int area = h[i] * width;

        if(area > maxArea)
            maxArea = area;
    }

    cout << maxArea << endl;
}*/