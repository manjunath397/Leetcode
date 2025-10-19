class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int count=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
            
        }
        for(auto it:mpp)
        {
            maxi=max(maxi,it.second);
        }
        
        for(auto &it:mpp)
        {
            if(it.second==maxi)
            {
                count+=it.second;
            }
        }
        return count;
    }
};
