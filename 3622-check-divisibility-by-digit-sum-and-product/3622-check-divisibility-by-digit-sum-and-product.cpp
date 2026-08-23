class Solution {
public:
int sum(int n){
    int x=n;
    int ans=0;
    while(x>0){
        int dig=x%10;
        ans+=dig;
        x/=10;
    }
    return ans;
}
int product(int n){
    int y=n;
    int res=1;
    while(y>0){
        int dig=y%10;
        res*=dig;
        y/=10;
    }
    return res;
}
    bool checkDivisibility(int n) {
        int k=sum(n);
        int m=product(n);
        int z=k+m;
        if(n%z==0){
            return true;
        }
        return false;
    }
};