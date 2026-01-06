class Solution {
public:
bool polindrome(const string &str ,int l,int r)
{
    
    while(l < r)
    {
        if(str[l]!= str[r]) return false;
        l++;
        r--;
    }
    return true;
}
    bool validPalindrome(string s) {
     
        int l=0,r=s.size()-1;
        if(polindrome(s,l,r)) return true;
        while(l < r)
        {
            if(s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                return polindrome(s,l+1,r) || polindrome(s,l,r-1);
            }
        }
        return true;
    }
};
