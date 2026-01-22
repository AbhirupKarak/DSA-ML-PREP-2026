#include <iostream>
#include <string.h>
#include <unordered_map>
using namespace std;

void longest_substring(string s)
{
    unordered_map<char, int> freq;
    int left = 0;
    int right = 0;
    int maxlen = 0;
    int start;
    for (right = 0; right < s.length(); right++) // Iterates through the string.
    {
        freq[s[right]]++;          // Hashmap for character : frequency pair
        while (freq[s[right]] > 1) // Condition for encountering duplicates in current substring
        {
            freq[s[left]]--;
            left++;
        }

        if (right + left - 1 > maxlen) // Updating longest substring
        {
            maxlen = right - left + 1;
            start = left;
        }
    }
    cout << "Longest Substring : ";
    for (int i = start; i < start + maxlen; i++)
    {
        cout << s[i]; //Printing longest substring
    }
}

int main()
{
    longest_substring("ABDSADASE"); // Hardcoded input.
    return 0;
}
