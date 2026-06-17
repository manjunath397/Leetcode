class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(auto it:deck)
        {
            mp[it]++;
        }
        int g=0;
        for(auto it:mp)
        {
            g=gcd(g,it.second);
        }
        return g >= 2;
        
    }
    int gcd(int a,int b)
    {
        while(b != 0)
        {
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
};
