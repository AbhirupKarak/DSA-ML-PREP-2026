//Leetcode Brute Force Solution
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int value;
    vector<vector<int>> m1(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            value = matrix[n-1-j][i];
            m1[i][j] = value;
        }
    }
    matrix= m1;
}
};

//Leetcode Optimal Solution
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
