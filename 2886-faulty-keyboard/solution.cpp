class Solution {
public:
    string finalString(string s) {
        bool reversed=false;
        string res;
        for(auto c:s)
        {
            if(c =='i')
            {
                reversed=!reversed;
            }
            else
            {
                if(!reversed)
                {
                        res.push_back(c);
                }
                else
                {
                    res.insert(res.begin(),c);
                }
            }
        }
        if(reversed)
        {
            reverse(res.begin(),res.end());
        }
        return res;
        
    }
};
