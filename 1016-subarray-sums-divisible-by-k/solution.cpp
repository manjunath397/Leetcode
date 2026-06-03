class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        long long prefixsum=0;
        int ans=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            prefixsum+=nums[i];
            int rem=((prefixsum%k)+k)%k;
            ans+=mp[rem];
            mp[rem]++;
        }
         return ans;
    }
   
};
