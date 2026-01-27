#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    vector<int> FindUnion(int arr1[], int arr2[], int m, int n)
    {
        int i = 0;
        int j = 0;

        vector<int> sol;

        while (i < m && j < n)
        {
            if (arr1[i] < arr2[j])
            {
                if (sol.empty() || sol.back() != arr1[i])
                    sol.push_back(arr1[i]);
                i++;
            }
            else if (arr1[i] > arr2[j])
            {
                if (sol.empty() || sol.back() != arr2[j])
                    sol.push_back(arr2[j]);
                j++;
            }
            else
            {
                if (sol.empty() || sol.back() != arr1[i])
                    sol.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        while (i < m)
        {
            if (sol.empty() || sol.back() != arr1[i])
                sol.push_back(arr1[i]);
            i++;
        }
        while (j < n)
        {
            if (sol.empty() || sol.back() != arr2[j])
                sol.push_back(arr2[j]);
            j++;
        }
        return sol;
    }
};

int main()
{
    int m = 9;
    int n = 7;

    int arr1[10] = {1, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[7] = {2, 3, 4, 4, 5, 11, 12};

    Solution obj;

    vector<int> Union = obj.FindUnion(arr1, arr2, m, n);
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}
