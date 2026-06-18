class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool>prime(right+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i*i <= right;i++)
        {
            if(prime[i])
            {
                for(int j=i*i;j <= right;j+=i)
                {
                    prime[j]=false;
                }
            }
        }
        int min_diff=INT_MAX;
        int a=-1,b=-1;
        vector<int> ans(2,-1);
        bool first=true;
        for(int i=left;i <= right;i++)
        {
           if(prime[i])
           {
            if(first)
            {
                a=i;
                first=false;
            }
            else
            {
                b=i;
                int diff=abs(a-b);
                if(diff < min_diff)
                {
                    min_diff=diff;
                    ans[0]=a;
                    ans[1]=b;
                }
                a=b;
            }
           }
        }
        return ans;
        
    }
};
