class Solution {
public:
    double myPow(double x, int n) {
        long long temp=n;
        if(temp<0){
            x=1/x;
            temp=-temp;
        }
        double ans=1.0;
        while(temp>0){
            if(temp&1){
                ans*=x;
            }
            x*=x;
            temp=temp>>1;
        }
        return ans;
    }
};