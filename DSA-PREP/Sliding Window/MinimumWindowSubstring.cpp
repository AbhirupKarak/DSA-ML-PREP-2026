#include <iostream>
#include <string.h>
#include <unordered_map>
#include <climits>
using namespace std;

string minimum_window_substring(string s, string t)
{
    unordered_map<char, int> hash;
    int count = 0;
    int minLen = INT_MAX;
    int sIndex = -1;
    int l = 0;
    int r = 0;
    int m = t.length();
    int n = s.length();
    for (int i = 0; i < m; i++)
    {
        hash[t[i]]++;
    }
    while (r < n)
    {
        if (hash[s[r]] > 0)
        {
            count++;
        }
        hash[s[r]]--;

        while (count == m)
        {
            if (r - l + 1 < minLen)
            {
                minLen = r - l + 1;
                sIndex = l;
            }
            hash[s[l]]++;
            if (hash[s[l]] > 0)
            {
                count--;
            }
            l++;
        }
        r++;
    }
    return sIndex == -1 ? "String not found" : s.substr(sIndex, minLen);
}

int main()
{
    // Your code goes here
    cout << minimum_window_substring("ddaaabbca", "abc");
    return 0;
}
