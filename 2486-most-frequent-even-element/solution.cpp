class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(auto num:nums)
        {
            if(num%2==0)
            {
                mpp[num]++;
            }
        }
        if(mpp.empty())
        {
            return -1;
        }
        int maxfreq=0;
        int ans=INT_MAX;
        for(auto it:mpp)
        {
            int num=it.first;
            int count=it.second;
            if(count>maxfreq|| count==maxfreq&&num<ans)
            {
                maxfreq=count;
                ans=num;
            }
        }
        return ans;
    }
        
};
