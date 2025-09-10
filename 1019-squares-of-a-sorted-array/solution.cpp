class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> sorted;
        for(int num:nums)
        {
            sorted.push_back(num*num);
        }
        sort(sorted.begin(),sorted.end());
        return sorted;
        
    }
    int main()
    {
        vector<int>nums;
       vector<int>result=sortedSquares(nums);
       for(int i:result)
       {
        cout<<i<<endl;
       }
        return 0;
    }
};
