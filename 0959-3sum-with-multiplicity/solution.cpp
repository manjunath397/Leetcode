class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        const int MOD=1e9+7;
        vector<long long>freq(101,0);
        long long ans=0;
        for(auto num:arr)
        {
            freq[num]++;
        }
        for(int a=0;a<=100;a++)
        {
            if(freq[a]==0) continue;
            for(int b=a;b<=100;b++)
            {
                if(freq[b]==0) continue;
                int c=target-a-b;
                if(c<0 || c>100) continue;
                if(c<b) continue;
                if(freq[c]==0) continue;
                if(a==b && b==c)
                {
                    ans+=(freq[a]*(freq[a]-1)*(freq[a]-2))/6;
                }
                else if(a==b && b!=c)
                {
                    ans+=((freq[a]*(freq[a]-1))/2)*freq[c];
                }
                else if(a!=b && b==c)
                {
                    ans+=freq[a]*((freq[b]*(freq[b]-1))/2);
                }
                else
                {
                    ans+=freq[a]*freq[b]*freq[c];
                }
                ans%=MOD;
            }
        }
        return ans;
        
    }
};
