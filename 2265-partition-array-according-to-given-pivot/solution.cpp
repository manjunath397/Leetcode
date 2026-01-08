class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less,greater,equal;
        for(auto it : nums)
        {
            if(it > pivot) greater.push_back(it);
            else if(it == pivot) equal.push_back(it);
            else less.push_back(it);
        }
        int i=0;
        for(int x : less) nums[i++]=x;
        for(int x : equal) nums[i++]=x;
        for(int x : greater) nums[i++]=x;
      return nums;   
    }
   
};
