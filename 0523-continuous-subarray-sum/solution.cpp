class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        long long prefixsum=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            prefixsum+=nums[i];
            int rem=prefixsum%k;
            if(mp.find(rem) != mp.end())
            {
                if(i-mp[rem]>=2)
                {
                    return true;
                }
            }
            else
            {
                mp[rem]=i;
            }
        }
        return false;
        
    }
};
