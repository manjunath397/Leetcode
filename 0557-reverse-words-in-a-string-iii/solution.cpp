class Solution {
public:
   void reverse(int i,int j,string &s)
   {
    while(i < j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
   }
    string reverseWords(string s) {
        int n=s.length();
        int i=0,j=0;
        while(i < n)
        {
            while(j < n && s[j]!=' ')
            {
                j++;
            }
            reverse(i,j-1,s);
            j++;
            i=j;
            
        }
        return s;
        
    }
};
