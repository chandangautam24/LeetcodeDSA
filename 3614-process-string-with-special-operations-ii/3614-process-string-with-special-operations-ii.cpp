class Solution {
public:
    char processStr(string s, long long k) {
        int n=s.size();
        string ans="";
        long long len=0;
        for(auto &i: s ){
            if(i=='*'){
             if(len>0){
                len--;
             }
            }
            else if(i=='#'){
                len*=2;
            }
            else if(i=='%'){
                continue;
            }
            else{
               len++;
            }
        }
        if(k>=len)return '.';
        for(int j=n-1; j>=0; j--){
          char c=s[j];
          if(c=='*'){
            len++;
          }
          else if(c=='#'){
            long long oldlen=len/2;
            if(k>=oldlen){
                k-=oldlen;
            }
            len=oldlen;
          }
          else if(c=='%'){
            k=len-1-k;
          }
          else{
            if(k == len-1){
                return c;
            }
            len--;
          }
        }
        return'.';
    }
};