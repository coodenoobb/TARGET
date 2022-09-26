#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Syntax
    std::vector<int> vec;

    vector<int> vec1;
    vec1 = {10, 20, 30};

    vec1.push_back(40);

    for (auto it : vec1)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}