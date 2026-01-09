class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int high=0,low=0,res=INT_MIN;
        vector<int> v(2,0);
        for(high=0;high<nums.size();high++)
        {
            v[nums[high]]++;
            while(v[0] > 0)
            {
                v[nums[low]]--;
                low++;
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;
        
    }
};
