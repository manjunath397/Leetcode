class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
    int n=arr.size();
    unordered_map<int,int>mpp;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int compliment=target-arr[i];
        if(mpp.find(compliment)!=mpp.end())
        {
            ans.push_back(mpp[compliment]);
            ans.push_back(i);
        }
        mpp[arr[i]]=i;
    }
    return ans;
    }

};
