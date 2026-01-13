class Solution {
public:
bool sahi(vector<int> &arr1,vector<int> &arr2)
{
    for(int i=0;i<256;i++)
    {
        if(arr1[i] < arr2[i])
        {
            return false;
        }
    }
    return true;
}
    string minWindow(string s, string t) {
        int high=0,low=0,res=INT_MAX,start=-1;
        vector<int> need(256,0);
        for(int i=0;i<t.size();i++)
        {
            need[t[i]]++;
        }
        vector<int> have(256,0);
        for(high=0;high<s.size();high++)
        {
            have[s[high]]++;
            while(sahi(have,need))
            {
                int len=high-low+1;
                if(len < res)
                {
                    res=len;
                    start=low;
                }
                have[s[low]]--;
                low++;
            }
        }
        if(start == -1) return "";
        else return s.substr(start,res);
        
        
        
    }
};
