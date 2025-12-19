class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int result=0;
        sort(nums.begin(),nums.end());
        int sum=nums[0]+nums[1]+nums[2];
        int min_diff=INT_MAX;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left=i+1,right=n-1;
            
            while(left<right)
            {
            int sum=nums[i]+nums[left]+nums[right];
            int diff=abs(sum-target);
            if(diff==0) return sum;
            if(diff<min_diff)
            {
                min_diff=diff;
                 result=sum;
                
            }
            if(sum<target)
            {
                left++;
            }
            else
            {
                right--;
            }
            }
        }
        return result;
        
    }
};
