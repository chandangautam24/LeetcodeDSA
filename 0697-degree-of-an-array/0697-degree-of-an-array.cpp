class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        unordered_map<int, int> first;
        unordered_map<int, int> last;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
            if (first.find(nums[i]) == first.end()) {
                first[nums[i]] = i;
            }
            last[nums[i]] = i;
        }
        int degree = 0;
        for (auto x : mpp) {
            degree = max(degree, x.second);
        }
        int ans = n;
        for (auto& i : mpp) {
            if (i.second == degree) {
                ans = min(ans, last[i.first] - first[i.first] + 1);
            }
        }
        return ans;
    }
};