class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=0;
        while(left<n)
        {
            if(nums[left]==0) left++;
            else
            {
                nums[right]=nums[left];
                left++;
                right++;
            }
        }
        while(right<n) 
        {
            nums[right]=0;
            right++;
        
    }
    }
};
