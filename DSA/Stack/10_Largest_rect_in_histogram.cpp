#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmallerElement(vector<int> &arr, int n)
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
vector<int> prevSmallerElement(vector<int> &arr, int n)
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
    next = nextSmallerElement(heights, n);

    vector<int> prev(n);
    prev = prevSmallerElement(heights, n);

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

    vector<int> arr = {2, 1, 5, 6, 2, 3};

    vector<int> nextAns;
    vector<int> prevAns;
    nextAns = nextSmallerElement(arr, 6);
    prevAns = prevSmallerElement(arr, 6);
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