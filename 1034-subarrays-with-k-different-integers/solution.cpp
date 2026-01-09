class Solution {
public:
int atmost(vector<int>&nums,int k)
{
     int high=0,low=0,res=0;
    unordered_map<int,int>f;
    for(high=0;high<nums.size();high++)
    {
        f[nums[high]]++;
        while(f.size() > k)
        {
            f[nums[low]]--;
            if(f[nums[low]] == 0) f.erase(nums[low]);
            low++;
        }
        res+=high-low+1;
    }
    return res;
   
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        return atmost(nums,k) - atmost(nums,k-1);
           
        
    
        
    }
};
