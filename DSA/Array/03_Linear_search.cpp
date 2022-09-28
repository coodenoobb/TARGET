#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Printing the Array" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}


bool linearSearch(int arr[], int size, int key)     // T.C : O(n)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}
int main()
{

    int size;
    int key;
    cout << "Enter size of the array : ";
    cin >> size;
    int arr[20];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, size);
    cout << endl;

    cout << "Enter element to be found ";
    cin >> key;

    bool result = linearSearch(arr, size, key);

    if (result)
    {
        cout << "Element Found" << endl;
    }

    else
    {
        cout << "Not Found";
    }

    return 0;
}