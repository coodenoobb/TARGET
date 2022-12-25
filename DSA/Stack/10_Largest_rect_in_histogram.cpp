#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmallerIndex(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}
vector<int> prevSmallerIndex(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {

        int curr = arr[i];

        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    vector<int> next(n);
    next = nextSmallerIndex(heights, n);

    vector<int> prev(n);
    prev = prevSmallerIndex(heights, n);

    int area = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int l = heights[i];

        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}
int main()
{

    vector<int> arr = {5,3,6,8,4};

    vector<int> nextAns;
    vector<int> prevAns;
    nextAns = nextSmallerIndex(arr, 5);
    prevAns = prevSmallerIndex(arr, 5);
    for (int i = 0; i < nextAns.size(); i++)
    {
        cout << nextAns[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < prevAns.size(); i++)
    {
        cout << prevAns[i] << " ";
    }
    cout << endl;

    int ans = largestRectangleArea(arr);
    cout << ans;

    return 0;
}