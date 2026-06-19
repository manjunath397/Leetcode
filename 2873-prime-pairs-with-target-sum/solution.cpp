class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<int>prime(n+1,true);
        if(n >= 0) prime[0]=false;
        if(n >= 1) prime[1]=false;
        for(int i=2;i*i <= n;i++)
        {
            if(prime[i])
            {
                for(int j=i*i;j<= n;j+=i)
                {
                    prime[j]=false;
                }
            }
        }
        vector<vector<int>>ans;
        for(int a=2; a<= n/2;a++)
        {
            if(prime[a])
            {
                int b=n-a;
                if(prime[b])
                {
                    ans.push_back({a,b});
                }
            }
        }
        return ans;
        
        
        
    }
};
