class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int k = j + 1;
                int q = n - 1;
                while (k < q) {
                    long long total =(long long) nums[i] + nums[j] + nums[k] + nums[q];
                    if (total == target) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[q]});
                        k++;
                        while (k < q && nums[k] == nums[k - 1]) {
                            k++;
                        }
                    } else if (total > target) {
                        q--;
                    } else {
                        k++;
                    }
                }
            }
        }
        return ans;
    }
};