class Solution {
public:
    vector<vector<int>> ans;
    void combination(int i, int sum, int n, vector<int>& temp,
                     vector<int>& candidates, int target) {
        if (sum == target) {
            ans.push_back(temp);
            return;
        }
        if (i == n || sum>target)
            return;
        temp.push_back(candidates[i]);
        combination(i, sum + candidates[i], n, temp, candidates, target);
        temp.pop_back();
        combination(i + 1, sum, n, temp, candidates, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> temp;
        combination(0, 0, n, temp, candidates, target);
        return ans;
    }
};