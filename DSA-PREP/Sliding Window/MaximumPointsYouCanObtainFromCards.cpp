//There are a set of cards with numbers(points) on them. 
//We can choose a total of "k" cards from either the left end or right end or both. 
//The program should return the maximum points(sum) that is possible within these conditions
//***From Lecture 2 of Striver's sliding window lectures.***

#include <iostream>
using namespace std;

void max_points(int *nums, int k, int n)
{
    int lsum = 0;
    int rsum = 0;
    int maxSum = 0;
    for (int i = 0; i <= k - 1; i++)
    {
        lsum += nums[i];
    }
    maxSum = lsum;
    int rIndex = n - 1;
    for (int i = k - 1; i >= 0; i--)
    {
        lsum -= nums[i];
        rsum += nums[rIndex];
        rIndex--;
        maxSum = max(lsum + rsum, maxSum);
    }
    cout << "max sum = " << maxSum << endl;
}

int main()
{
    int nums[] = {6, 2, 3, 4, 7, 2, 1, 7, 1}; //Hard-coded input, can change if needed
    int k = 4;//Same with number of cards taken
    int n = sizeof(nums) / sizeof(nums[0]);
    max_points(nums, k, n);
    return 0;
}
