class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int> v(2,0);
        int high=0,low=0,res=INT_MIN;
        for(high=0;high<nums.size();high++)
        {
            v[nums[high]]++;
            int len=high-low+1;
            int count_1=v[1];
           int count_0=len-count_1;
            while(count_0 > k)
            {
                v[nums[low]]--;
                low++;
                count_1=v[1];
                len=high-low+1;
                count_0=len-count_1;
            }
            res=max(res,len);
        }
        return res;
        
    }
};
