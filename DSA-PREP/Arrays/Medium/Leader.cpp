#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> leader(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> leader;
        leader.push_back(arr.back());
        int maxi = arr.back();
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] > maxi)
            {
                maxi = arr[i];
                leader.push_back(arr[i]);
            }
        }
        reverse(leader.begin(), leader.end());
        return leader;
    }
};

int main()
{
    // Your code goes here
    Solution obj;
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> sol = obj.leader(arr);
    for (auto i : sol)
    {
        cout << i << " ";
    }
    return 0;
}
