class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int high=0,low=0,res=0,prod=1;
        for(high=0;high < nums.size();high++)
        {
            prod*=nums[high];
            while(prod >= k)
            {
                prod/=nums[low];
                low++;
            }
            int len=high-low+1;
            res+=len;
        }
        return res;
        
    }
};
