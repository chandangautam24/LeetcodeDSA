class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums){
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        sort(nums.begin(),nums.end());
        int min=nums[0];
        int max=nums[n-1];
        for(int i=min; i<=max; i++){
           if(mpp.find(i)==mpp.end()){
            ans.push_back(i);
           } 
        }
        return ans;
    }
};