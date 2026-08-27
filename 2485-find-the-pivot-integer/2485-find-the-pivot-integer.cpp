class Solution {
public:
    int pivotInteger(int n) {
        int sum=(n*(n+1))/2;
        int k=sqrt(sum);
        if(k*k==sum){
            return k;
        }
        return -1;
    }
};