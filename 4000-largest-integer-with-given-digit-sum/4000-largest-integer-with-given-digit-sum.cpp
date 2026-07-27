class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>9*n)return -1;
        if(s==0)return 0;
        long long ans=0;
        for(int i=0; i<n; i++){
            int dig=min(9,s);
            ans=ans*10+dig;
            s-=dig;
        }
        return ans;
    }
};