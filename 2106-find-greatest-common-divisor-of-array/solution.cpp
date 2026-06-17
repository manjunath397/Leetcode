class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small=nums[0],large=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] >large) large=nums[i];
            if(nums[i] < small) small=nums[i];
        }
        return gcd(large,small);
        
    }
    int gcd(int a,int b)
    {
        while( b != 0)
        {
            int rem=a%b;
            a=b;b=rem;
        }
        return a;
    }
};
