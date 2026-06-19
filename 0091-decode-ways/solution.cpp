class Solution {
public:
int solve(string &s,int i,vector<int> &dp)
{
    if(i == s.size()) return 1;
    if(s[i] == '0') return 0;
    if(dp[i] != -1) return dp[i];
    int one_digit=solve(s,i+1,dp);
    int two_digit=0;
    if(i+1 < s.size())
    {
        int num=(s[i]-'0')*10 + (s[i+1]-'0');
        if(num >= 10 && num <= 26)
        {
            two_digit=solve(s,i+2,dp);
        }
    }
    dp[i]=one_digit+two_digit;
    return dp[i];
}
    int numDecodings(string s) {
        vector<int>dp(s.size(),-1);
        return solve(s,0,dp);
        
    }
};
