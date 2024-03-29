#include <bits/stdc++.h>
using namespace std;
int binSearch(int arr[], int target, int l, int h)
{

    if (l > h)
    {
        return -1;
    }

    int mid = l + (h - l) / 2;

    if (arr[mid] == target){
        return mid;
    }

    else if (arr[mid] > target)
    {
        return binSearch(arr, target, l, mid - 1);
    }

    else
        return binSearch(arr, target, mid + 1, h);
}
int main()
{

    int arr[6] = {10, 20, 30, 40, 50, 60};
    int target = 40;

    int ans = binSearch(arr, target, 0, 5);
    cout << ans << endl;

    return 0;
}