class Solution {
public:
    int maxPower(string s) {
        int high=0,low=0,res=INT_MIN;
        unordered_map<char,int>v;
        for(high=0;high<s.size();high++)
        {
            v[s[high]]++;
            while(v.size() > 1)
            {
                v[s[low]]--;
                if(v[s[low]] == 0) v.erase(s[low]);
                low++;
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;
        
    }
};
