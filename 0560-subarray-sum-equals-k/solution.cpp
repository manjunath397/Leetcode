class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       mp[0]=1;
       int ans=0;
       long long prefixsum=0;
       for(int i=0;i<nums.size();i++)
       {
        prefixsum+=nums[i];
        int need=prefixsum-k;
        if(mp.find(need) != mp.end())
        {
            ans+=mp[need];
        }
        mp[prefixsum]++;
       }
       return ans;
    }
    
};
