class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n < 2)
            return 1;
        int mnind = -1, mxind = -1;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                mnind = i;
            }
            if (nums[i] > maxi) {
                maxi = nums[i];
                mxind = i;
            }
        }
        int l=min(mnind,mxind);
        int r=max(mnind,mxind);
        int ans=min({r+1,n-l,l+1+n-r});
        return ans;
    }
};