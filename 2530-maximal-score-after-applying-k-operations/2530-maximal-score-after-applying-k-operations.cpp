class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        long long score=0;
        for(int i=0; i<nums.size(); i++){
           pq.push(nums[i]);
        }
        while(k>0){
            k--;
            int val=pq.top();
            pq.pop(); 
            score+=val;
            pq.push(ceil(val/3.0));
        }
        return score;
    }
};