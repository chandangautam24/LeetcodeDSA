class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(auto &x: nums){
            mpp[x]++;
        }
        int sum=nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[i-1]+1){
                break;
            }
            sum+=nums[i];
        }
       while(mpp.find(sum)!=mpp.end()){
        sum++;
       }
        return sum;
    }
};