class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==1){
            unordered_map<int,int>mpp;
            for(int i=0; i<n; i++){
                mpp[nums[i]]++;
            }
            int ans=-1;
            for(auto [x,cnt]: mpp){
                if(cnt==1){
                    ans=max(ans,x);
                }
            }
            return ans;
        }
        if(k==n){
            return *max_element(nums.begin(),nums.end());
        }
        unordered_map<int,int>mpp;
        int ans=-1;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        if(mpp[nums[0]]==1){
          ans=max(ans,nums[0]);
        }
        if(mpp[nums[n-1]]==1){
          ans=max(ans,nums[n-1]);
        }
        return ans;
    }
};