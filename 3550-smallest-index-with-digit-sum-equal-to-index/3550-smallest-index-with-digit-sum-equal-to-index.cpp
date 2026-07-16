class Solution {
public:
int sumdigits(int x){
    int r=x;
    int sum=0;
    while(x>0){
      int rev=x%10;
      sum+=rev;
      x/=10;
    }
    cout<<sum<<endl;
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(sumdigits(nums[i])==i){
                return i;
            }
        }
        return -1;
    }
};