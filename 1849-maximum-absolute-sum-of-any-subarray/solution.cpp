class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int curr_sum1=0;
        int max_sum=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            curr_sum1+=nums[i];
            if(curr_sum1 > max_sum)
            {
                max_sum=curr_sum1;
            }
            if(curr_sum1 < 0)
            {
                curr_sum1=0;
            }
        }
        int min_sum=nums[0];
        int curr_sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            curr_sum2+=nums[i];
            if(curr_sum2 < min_sum)
            {
                min_sum=curr_sum2;
            }
            if(curr_sum2 > 0)
            {
                curr_sum2=0;
            }
        }
        return max(abs(max_sum),abs(min_sum));
        
    }
};
