class Solution {
public:
    void reversestring(string &s,int l ,int r)
    {
        while(l < r)
        {
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
    string reverseWords(string s) {
        int n=s.size();
        int i=0,j=0;
        while(i < n)
        {
            while(i < n && s[i] ==' ') i++;
            while(i < n && s[i] !=' ')
            {
                s[j++] =s[i++];
            }
            while(i < n && s[i] == ' ') i++;
            if( i < n) s[j++] =' ';
        }
        s.resize(j);
        reversestring(s,0,j-1);
        int start=0;
        for(int end=0; end <= j ;end++)
        {
            if(end == j || s[end] == ' ')
            {
                 reversestring(s,start,end-1);
                 start=end+1;
            }
        }
        return s;
        
    }
};
