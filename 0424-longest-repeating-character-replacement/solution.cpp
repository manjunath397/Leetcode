class Solution {
public:
int findmax(vector<int>& arr)
{
    return *max_element(arr.begin(),arr.end());
}
    int characterReplacement(string s, int k) {
        if(s.size() == 0) return 0;
        int high=0,low=0,res=INT_MIN;
        vector<int> v(256,0);
        for(high = 0; high < s.size();high++)
        {
            v[s[high]]++;
            int len= high-low+1;
            int max_count=findmax(v);
            int difference=len-max_count;
            while(difference > k)
            {
                v[s[low]]--;
                low++;
                max_count=findmax(v);
                len=high-low+1;
                difference=len-max_count;
            }
            res=max(res,len);
        }
        return res;

        
    }
};
