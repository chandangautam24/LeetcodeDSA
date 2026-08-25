class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int &i:nums){
            mpp[i]++;
        }
        int j=1;
        while(j){
            if(j%k==0 && mpp.find(j)==mpp.end()){
                return j;
                break;
            }
          j++;
        }
        return k;
    }
};