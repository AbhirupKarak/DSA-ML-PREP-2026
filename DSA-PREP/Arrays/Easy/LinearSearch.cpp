#include <iostream>
using namespace std;

int linear_search(int *arr, int n, int k)
{
    bool found = false;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            found = true;
            return i;
        }
        i++;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter element to be searched : ";
    cin >> k;
    cout << linear_search(arr, n, k);
    return 0;
}
