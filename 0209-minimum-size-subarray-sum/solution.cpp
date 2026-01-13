class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int high=0,low=0,sum=0,res=INT_MAX;
        for(high=0;high< nums.size();high++)
        {
            sum+=nums[high];
            while(sum >= target)
            {
                int len=high-low+1;
                res=min(res,len);
                sum-=nums[low];
                low++;
            }
        }
        if(res == INT_MAX) return 0;
        return res;
    }
};

