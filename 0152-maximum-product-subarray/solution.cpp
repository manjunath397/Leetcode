class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long max_product=INT_MIN;
        long long suffix=1;
        long long prefix=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {

            if(prefix == 0) prefix =1;
            if(suffix == 0) suffix =1;



            prefix*=nums[i];
            suffix*=nums[n-1-i];
            max_product=max(max_product,max(prefix,suffix));

        }
        return max_product;
    }
};
