#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less_equal<int>,
    rb_tree_tag,tree_order_statistics_node_update> oset;
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        oset os;
        vector<int>ans(n);
        for(int i=n-1; i>=0; i--){
            ans[i]=os.order_of_key(nums[i]);
            os.insert(nums[i]);
        }
        return ans;
    }
};