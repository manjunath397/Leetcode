class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(auto it:nums)
        {
            if(it>=0) pos.push_back(it);
            else neg.push_back(it);
        }
        if(pos.size()==0)
        {
            for(int i=0;i<neg.size();i++)
            {
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }
        
         if(neg.size()==0)
        {
            for(int i=0;i<pos.size();i++)
            {
                pos[i]=pos[i]*pos[i];
            }
            return pos;
        }
        int i=0,j=0;
        int id=0;
        int n=pos.size();
        int m=neg.size();
        vector<int>res(n+m);
        for(int i=0;i<n;i++)
        {
            pos[i]=pos[i]*pos[i];
        }
        for(int i=0;i<m;i++)
        {
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());
        while(i<n && j<m)
        {
            if(pos[i]<=neg[j])
            {
                res[id]=pos[i];
                id++;
                i++;
            }
            else
            {
                res[id]=neg[j];
                id++;
                j++;
            }
        }
        while(j<m)
        {
            res[id]=neg[j];
            id++;
            j++;
        }
        while(i<n)
        {
            res[id]=pos[i];
            id++;
            i++;
        }
        return res;
    }
};
