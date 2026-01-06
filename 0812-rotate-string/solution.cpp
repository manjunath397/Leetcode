class Solution {
public:
    bool rotateString(string s, string goal) {
        int n= s.size();
        if(s == goal) return true;
        for(int i=1;i<n;i++)
        {
            string str=s;
            reverse(str.begin(),str.begin()+i);
		    reverse(str.begin()+i,str.end());
		    reverse(str.begin(),str.end());
            if(str == goal) return true;

        }
        return false;

        
    }
};
