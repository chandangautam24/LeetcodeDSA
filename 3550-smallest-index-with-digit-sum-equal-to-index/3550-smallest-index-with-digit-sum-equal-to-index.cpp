class Solution {
public:
bool digisum(int x,int i){
    long long sum=0;
    while(x>0){
     int digi=x%10;
     sum+=digi;
     x=x/10;
    }
    if(sum==i){
        return true;
    }
    return false;
}
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(digisum(nums[i],i)){
                return i;
            }
        }
        return -1;
    }
};