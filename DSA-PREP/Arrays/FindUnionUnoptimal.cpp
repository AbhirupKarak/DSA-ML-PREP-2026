#include <iostream>
#include <map>
#include <vector>
using namespace std;
// Not Optimal
vector<int> FindUnion(int *arr1, int *arr2, int m, int n)
{
    map<int, int> freq;
    for (int i = 0; i < m; i++)
    {
        freq[arr1[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr2[i]]++;
    }

    vector<int> Union;
    for (auto i : freq)
    {
        Union.push_back(i.first);
    }
    return Union;
}

int main()
{
    int m = 10;
    int n = 7;

    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[7] = {2, 3, 4, 4, 5, 11, 12};

    vector<int> Union = FindUnion(arr1, arr2, n, m);
    for (auto &val : Union)
        cout << val << " ";

    return 0;
}
