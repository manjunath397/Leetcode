    class Solution {
    public:
        int secondHighest(string s) {
            vector<int>v;
            for(auto it: s)
            {
                if(isdigit(it))
                {
                    v.push_back(it-'0');
                }
            }
            if(v.size()<2) return -1;
            int largest=-1,s_largest=-1;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]>largest)
                {
                    s_largest=largest;
                    largest=v[i];
                }
                if(v[i]>s_largest && v[i]<largest)
                {
                    s_largest=v[i];
                }
            }
            if(largest==s_largest)
            {
                return -1;
            }
            else
            {
                return s_largest;
            }
            
        }
    };
