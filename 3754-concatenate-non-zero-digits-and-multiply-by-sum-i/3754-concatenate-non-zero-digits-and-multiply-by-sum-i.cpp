class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)return 0;
        long long num=0;
        int sum=0;
        long long place=1;
        while(n>0){
          int digit=n%10;
          if(digit!=0){
          num+=digit*place;
          place*=10;
          sum+=digit;
          }
        n/=10;
        }
        return 1LL*num*sum;
    }
};