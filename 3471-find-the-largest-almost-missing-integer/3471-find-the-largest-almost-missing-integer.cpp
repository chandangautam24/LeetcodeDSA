class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = k-1;
        unordered_map<int, int> mpp;
        int ans = -1;
        if (k == 1) {
             for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
            for (auto j : mpp) {
                if (j.second == 1) {
                    ans = max(ans, j.first);
                }
            }
            return ans;
        }
        if (k == n) {
            ans = *max_element(nums.begin(), nums.end());
            return ans;
        }
        while(r<n){
         for(int i=l; i<=r; i++){
           mpp[nums[i]]++;
         }
         l++;
         r++;
        }
        for(auto x:mpp){
            if(x.second==1){
                ans=max(ans,x.first);
            }
        }
        return ans;
    }
};
