class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,res=1;
        if(nums.size() ==0 ) return 0;
        while(j < nums.size())
        {
            if(nums[j]== nums[j-1])
            {
                j++;
                continue;
            }
            nums[i+1] = nums[j];
            j++;
            i++;
            res++;
        }
        return res;
        
        
    }
};
