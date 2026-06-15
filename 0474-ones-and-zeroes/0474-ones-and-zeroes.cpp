class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int s = strs.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        int cnt = 0;
        for (auto& i : strs) {
            int cnt1 = 0;
            int cnt0 = 0;
            for (char& c : i) {
                if (c == '1')
                    cnt1++;
                else
                    cnt0++;
            }
            for (int i = m; i >= cnt0; i--) {
                for (int j = n; j >= cnt1; j--) {
                    dp[i][j] = max(dp[i][j], 1 + dp[i - cnt0][j - cnt1]);
                }
            }
        }
        return dp[m][n];
    }
};